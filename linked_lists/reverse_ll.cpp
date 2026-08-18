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
//leetcode 206
//brute force
node*rev(node*head){
    node*temp=head;
    stack <int> st;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;

    }
    temp=head;
    while(temp!=nullptr){
        temp->data=st.top();
        st.pop();
        temp=temp->next;

    }
    return head;

}

node*optimal(node*head){
    node*temp=head;
    node*prev=nullptr;
    node*front=head;

    while(temp!=nullptr){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
        

    }
    return prev;
}