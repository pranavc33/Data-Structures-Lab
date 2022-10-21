#include <iostream>
using namespace std;

struct node{
    int info;
    node *next;
};

class linkedlist{
    private:
    node *head;
    public:

    linkedlist(){
        head=NULL;
    }

    void insery(int item){
        node *temp= new node;
        temp->info=item;
        temp->next=head;
        head=temp;
    }

    void insert_after(int item, int value){
        node *temp=new node;
        temp->info=item;
        node *link=head;
        bool found=false;
        while(link!=NULL){
            if(link->info==value){
                temp->next=link->next;
                link->next=temp;
                found=true;
                break;
            }
            link=link->next;
        }
        if(!found){
            cout<<"Element not found!"<<endl;
        }
    }
    void insert_before(int item, int value){
        node *temp= new node;
        temp->info=item;
        node *link=head;
        bool found=false;
        if(link->info==value){
            head=temp;
            temp->next=link;
            return;
        }
        while(link->next!=NULL){
            if(link->next->info==value){
                temp->next=link->next;
                link->next=temp;
                found=true;
                break;
            }
            link=link->next;
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }
    }

    void remove(int item){
        node *link=head;
        bool found=false;

        if(link->info==item){
            head=link->next;
            return;
        }

        while(link->next!=NULL){
            if(link->next->info==item){
                link->next=link->next->next;
                found=true;
                break;
            }
            link=link->next;
        }
        if(link->next==NULL){
            delete link->next;
            link->next=NULL;
            found=true;
        }

        if(!found){
            cout<<"Element not found in the list"<<endl;
        }
    }

    void linkerse(){
        node *link= new node;
        link=head;
        while(link!=NULL){
            cout<<link->info<<' ';
            link=link->next;
        }
        cout<<endl;
    }

    void reverse(){
        node *prev=NULL, *next=NULL, *cur=head;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
    }

    void sort(bool rev=false){
        node *t=head, *t2, *min;
        int temp;
        while(t){
            min=t;
            t2=t->next;
            while(t2){
                if(t2->info<min->info)
                    min=t2;
                t2=t2->next;
            }
            if(min!=t)
                swap(min->info,t->info);
            t=t->next;
        }
    if(rev)
        reverse();
    }

    void delete_alternate(){
        node *temp=head;
        node *temp2=temp->next;
        while(temp && temp2){
            temp->next=temp2->next;
            delete temp2;
            temp=temp->next;
            if(temp)
                temp2=temp->next;
        }

    }

    void insert_sort(int item){
        node *temp=new node;
        node *link=head;
        temp->info=item;
        //EDGE CASE:List Empty
        if(head==NULL){
            insert(item);
            return;
        }

        if(link->info>item){
            temp->next=head;
            head=temp;
            return;
        }
        while(link->next!=NULL){
            if(link->next->info>item){
                temp->next=link->next;
                link->next=temp;
                break;
            }
            link=link->next;
        }
                if(link->next==NULL){
            link->next=temp;
            temp->next=NULL;
        }
    }
};
int main(){
    linkedlist L;
    int choice;
    int loc,item;
    L.insert(100);
    L.insert(2100);
    L.insert(10);
    L.insert(1420);
    cout<<"Select an operation to perform on the linked list"<<endl;
    cout<<"1.Insert before another Element"<<endl;
    cout<<"2.Insert after another Element"<<endl;
    cout<<"3.Delete an Element"<<endl;
    cout<<"4.linkerse the list"<<endl;
    cout<<"5.Reverse the list"<<endl;
    cout<<"6.Sort the list"<<endl;
    cout<<"7.Delete alternate Elements"<<endl;
    cout<<"8.Insert in an order"<<endl;
    cout<<"9.Exit"<<endl;
    while(true){
        cout<<">";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the Element to insert before:";
                cin>>loc;
                cout<<"Enter the Element to insert:";
                cin>>item;
                L.insert_before(item, loc);
                break;
            case 2:
                cout<<"Enter the Element to insert after:";
                cin>>loc;
                cout<<"Enter the Element to insert:";
                cin>>item;
                L.insert_after(item, loc);
                break;
            case 3:
                cout<<"Enter the Element to delete:";
                cin>>item;
                L.remove(item);
                break;
            case 4:
                L.linkerse();
                break;
            case 5:
                L.reverse();
                break;
            case 6:
                cout<<"0 for Ascending\n1 for Descending";
                cin>>item;
                L.sort(item);
                break;
            case 7:
                L.delete_alternate();
                break;
            case 8:
                cout<<"Enter the Element to insert:";
                cin>>item;
                L.insert_sort(item);
                break;
            case 9:
                return 0;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }
}