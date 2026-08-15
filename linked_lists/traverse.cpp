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

int main() {
  
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    cout<<"node 1 is "<<head->data<<endl;
    cout<<"node 2 is "<<head->next->data<<endl;
    cout<<"node 3 is "<<head->next->next->data<<endl;


    cout<<"traverseing a linked list ==="<<endl;

    node*temp=head;

    int count=0;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    cout<<" and the number of nodes are --> "<<count<<endl;


    return 0;
}