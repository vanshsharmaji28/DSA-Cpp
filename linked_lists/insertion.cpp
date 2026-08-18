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

void insert_at_position(node*&head, int val ,int position){

    node*temp=head;
    node*newnode=new node(val);
    if(position==0){
        
        newnode->next=head;
        head=newnode;
        return;

    }

    for(int i=0; i<position-1;i++){
        if(temp==nullptr){
            return;
        }
        temp=temp->next;
    }
    
    if(temp == nullptr) {
    delete newnode;
    return;
}
   
    newnode->next=temp->next;
    temp->next=newnode;

}

void insert_before(node*&head,int val, int target){
    node*newnode=new node(val);

    if(head==nullptr){
        newnode->next=head;
        head=newnode;
        return;
    }
    if(head->data==target){
        newnode->next=head;
        head=newnode;
        return;
    }
    node*temp=head;
    
    while(temp->next!=nullptr && temp->next->data!=target){
        temp=temp->next;
    }

    if(temp->next==nullptr){
        delete newnode;
        return ;
    }
    newnode->next =temp->next;
    temp->next=newnode;


}

void insert_after(node*&head , int val, int target){
    node*temp=head;
    node*newnode=new node(val);

    if(head==nullptr){
        head=newnode;
       return;
    }
    

    while(temp!=nullptr && temp->data!=target){
        temp=temp->next;
    }
    if(temp==nullptr){
        delete newnode;
        return;
    }

    newnode->next=temp->next;
    temp->next=newnode;

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
    
    node*temp=head;
   int count=0;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    insert_after(head,25,30);
    cout<<endl<<endl;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    return 0;
}