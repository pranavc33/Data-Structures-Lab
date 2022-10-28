#include <iostream>
using namespace std;

struct Node{
    int info;
    Node *next, *prev;
};

class Doubly{
    public:
    Node *head, *tail;
    Doubly(){
        head=NULL;
        tail=NULL;
    }

    void insert(int elem){
        Node *temp= new Node;
        temp->info=elem;
        temp->next=NULL;
        if(head==NULL){
            // list is empty
            head=temp;
            temp->prev=NULL;
        }
        else{
            temp->prev=tail;
            temp->prev->next=temp;
        }    
        tail=temp;
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

    void concatenate(Doubly d2){
        tail->next=d2.head;
        d2.head->prev=tail;
    }
};

int main(){
    Doubly d1, d2;
    cout<<"Enter list 1(-1 to break):"<<endl;
    int c;
    while (true){
        cin>>c;
        if(c==-1){
            break;
        }
            d1.insert(c);
    }
    cout<<"Enter list 2(-1 to break):"<<endl;
    while (true){
        cin>>c;
        if(c==-1){
            break;
        }
            d2.insert(c);
    }
    d1.display();
    d2.display();
    d1.concatenate(d2);
    d1.display();
}