#include <iostream>
using namespace std;
#include<vector>
#include<stack>

class node{
    public:
        int data;
        node*next;

        node(int val){
            data=val;
            next=nullptr;
        }
};

//my logic

node*remove(node*head , int n){
    node*temp=head;
    int count=0;
    vector<node* >v;

    while(temp!=nullptr){
        v.push_back(temp);
        temp=temp->next;
    }
    
    int index=v.size()-n;

    node*prev=v[index-1];
    prev->next=prev->next->next;
    delete prev;
    return head;




}