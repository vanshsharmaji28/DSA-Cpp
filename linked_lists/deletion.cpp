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

void delete_first_node(node*&head, node*&tail){
    if(head==nullptr){
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;

    if(head == nullptr) {
        tail = nullptr;
    }
}

void delete_last_node(node*&head , node*&tail){
   
    if(head == nullptr) {
        return;
    }
    //if only one node
   if(head==tail){
    delete head;
    head=nullptr;
    tail=nullptr;
    return;
   }
    node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    node*nodetodelete=temp->next;
    temp->next=nullptr;
    tail=temp;
    delete nodetodelete;
}

void delete_at_position(node*&head, node*&tail, int position){
    node*temp=head;
    if(position<0){
        return;
    }
    if(head==nullptr){
        return ;
    }
    if(head==tail){
        return ;
    }
    
        if(position == 0) {

        node* nodeToDelete = head;

        head = head->next;

        delete nodeToDelete;

        // List became empty
        if(head == nullptr) {
            tail = nullptr;
        }

        return;
    }
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
     if(temp->next == nullptr) {
        return;
    }
    
    node*nodedel=temp->next;
    if(nodedel==tail){
        tail=temp;
    }
    temp->next=temp->next->next;
    delete nodedel;
}

void delete_by_value(node*&head, node*&tail,int target){
   
  if(head == nullptr) {
        return;
    }
    if(head->data==target ){
        node*nodedel=head;
        head=head->next;
        delete nodedel;
         if(head == nullptr) {
            tail = nullptr;
        }
        return;
    }
   
    node*temp=head;
    while(temp->next->data!=target){
        temp=temp->next;
    }
     if(temp->next == nullptr) {
        return;
    }
    
    node*nodedel=temp->next;
      if(nodedel == tail) {
        tail = temp;
    }
    temp->next=nodedel->next;
    delete nodedel;
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
   //
   delete_at_position(head,tail,2);

    cout<<endl<<endl;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    return 0;
}