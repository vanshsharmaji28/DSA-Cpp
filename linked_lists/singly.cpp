#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=nullptr;
        }

};


int main(){
    
    node*n1=new node(10);
    node*n2=new node(20);
    node*n3=new node(30);

    n1->next=n2;
    n2->next=n3;

    node*head=n1;


    cout<<"node 1 is "<<n1->data<<endl;
    cout<<"node 2 is "<<n2->data<<endl;
    cout<<"node 3 is "<<n3->data<<endl;

}
