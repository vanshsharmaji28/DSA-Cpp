#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*next;

        node(int val){
            data=val;
            next=nullptr;
        }
};


void insertatstart(node*&head,int val){
    node*newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

void insert_at_end(node*&tail,node*&head,int val){
    node*newnode=new node(val);
     if(head == nullptr) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

int main() {
  
    node*head=new node(10);
    node*tail=head;
    head->next=new node(20);
    tail=tail->next;
    head->next->next=new node(30);
    tail=tail->next;
    head->next->next->next=new node(40);
    tail=tail->next;
    head->next->next->next->next=new node(50);
    tail=tail->next;
    head->next->next->next->next->next=new node(60);
    tail=tail->next;
    
    


    return 0;
}