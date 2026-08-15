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

bool seach_element(node*head, int target){
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

node*lastNode(node*head){
    node*temp=head;
    if(head==nullptr){
        return nullptr;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
        
    }
    return temp;
}

node*getNode(node*head, int position){
    node*temp=head;
    int count=0;

    while(temp!=nullptr){
        if(count==position){
            return temp;
        }
        count++;
        temp=temp->next;
    }
    return nullptr;
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
    
    
    node*result=getNode(head,3);
    if(result!=nullptr){
        cout<<"element at position is "<<result->data<<endl<<endl;
    }

    node*last=lastNode(head);
    cout<<"last node is == "<<last->data<<endl<<endl;

    cout<<"last element of the linked list using the tail pointert is =="<<tail->data<<endl;
    
    cout<<"traverseing a linked list ==="<<endl;

    node*temp=head;

    int count=0;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    cout<<" and the number of nodes are --> "<<count<<endl;

   cout<<"is 40 in the linked list ";
    if( seach_element(head,40)){
        cout<<"yesss"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


    return 0;
}