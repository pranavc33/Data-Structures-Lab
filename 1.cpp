//Menu Driven Doubly Linked List Program
#include <iostream>
using namespace std;

class Node{
    public:
    int info;
    Node *next, *prev;
};

class Doubly{
    private:
    Node *head, *tail;
    public:
    Doubly(){
        head=NULL;
        tail=NULL;
    }

    void append(int item){
        Node *temp= new Node;
        temp->info=item;
        temp->next=NULL;
        if(head==NULL){
            // list is empty
            temp->prev=NULL;
            head=temp;
        }
        else{
            temp->prev=tail;
            tail->next=temp;
        }    
        tail=temp;
    }

    void delete_end(){
        Node *temp= tail;
        if(temp->prev==NULL){
            head=tail=NULL;
            delete temp;
            return;
        }
        temp->prev->next=NULL;
        tail=temp->prev;
        delete temp;
        return;
    }

    void insert_pos(int item, int loc){
        Node *temp= new Node;
        Node *link= new Node;
        temp->info=item;
        link=head;
        int count=0;
        while(link!=NULL){
            if(count==loc){
                break;
            }
            count++;
            link=link->next;            
        }
        if(link==NULL){
            append(item);
            return;
        }
        link->prev->next=temp;
        temp->prev=link->prev;
        temp->next=link;
        link->prev=temp;
    }

    void delete_pos(int loc){
        Node *link;
        link=head;
        if(loc==0){
            head=link->next;
            delete link;
            return;
        }
        int count=0;
        while(link!=NULL){
            if(count==loc){
                break;
            }
            count++;
            link=link->next;            
        }
        if(link==NULL){
            delete_end();
        }
        link->prev->next=link->next;
        link->next->prev=link->prev;
    }
// Both of the functions have no edge cases until itement found
    void insert_after(int item, int val){
        Node *temp= new Node;
        Node *link= new Node;
        temp->info=item;
        link=head;
        bool found=false;
        while(link!=NULL){
            if(val==link->info){
                found=true;
                if(link->next!=NULL)
                    link->next->prev=temp;
                else
                    tail=temp;
                temp->next=link->next;
                link->next=temp;
                temp->prev=link;
                break;
            }
            link=link->next;
        }
        if(!found){
            cout<<"itement not found"<<endl;
        }
    }

    void insert_before(int item, int val){
        Node *temp= new Node;
        Node *link= new Node;
        temp->info=item;
        link=tail;
        bool found=false;
        while(link!=NULL){
            if(val==link->info){
                found=true;
                if(link->prev!=NULL)
                    link->prev->next=temp;
                else
                    head=temp;
                temp->prev=link->prev;
                link->prev=temp;
                temp->next=link;
                break;
            }
            link=link->prev;
        }
        if(!found){
            cout<<"itement not found"<<endl;
        }
    }

    void display(){
        Node *link= new Node;
        link= head;
        while(link!=NULL){
            cout<<link->info<<' ';
            link=link->next;
        }
        cout<<endl;
    }

    void reverse(){
        Node *link=head;
        while(link!=NULL){
            swap(link->next,link->prev);
            link=link->prev;
        }
        swap(head,tail);
    }
};

int main(){
    Doubly D;
    int choice;
    int loc,item;
    cout<<"Select an operation to perform on the doubly linked list"<<endl;
    cout<<"1.Insert at end"<<endl;
    cout<<"2.Delete from end"<<endl;
    cout<<"3.Insert at Position"<<endl;
    cout<<"4.Delete from Position"<<endl;
    cout<<"5.Insert after another itement"<<endl;
    cout<<"6.Insert before another itement"<<endl;
    cout<<"7.linkerse the list"<<endl;
    cout<<"8.Reverse the list"<<endl;
    cout<<"9.Exit"<<endl;
    while(true){
        cout<<">";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the itement to insert:";
                cin>>item;
                D.append(item);
                break;
            case 2:
                D.delete_end();
                break;
            case 3:
                cout<<"Enter the location:";
                cin>>loc;
                cout<<"Enter the itement to insert:";
                cin>>item;
                D.insert_pos(item, loc);
                break;
            case 4:
                cout<<"Enter the location:";
                cin>>loc;
                D.delete_pos(loc);
                break;
            case 5:
                cout<<"Enter the itement to insert after:";
                cin>>loc;
                cout<<"Enter the itement to insert:";
                cin>>item;
                D.insert_after(item, loc);
                break;
            case 6:
                cout<<"Enter the itement to insert before:";
                cin>>loc;
                cout<<"Enter the itement to insert:";
                cin>>item;
                D.insert_before(item, loc);
                break;
            case 7:
                D.display();
                break;
            case 8:
                D.reverse();
                break;
            case 9:
                return 0;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }
}