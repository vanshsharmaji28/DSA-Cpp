#include <iostream>
using namespace std;
#include<vector>

class node{
    public:
        int data;
        node*next;

        node(int val){
            data=val;
            next=nullptr;
        }
};
//brute force
bool palindrome(node*head){
    node*temp=head;
    vector<int> st;

    while(temp!=nullptr){
        st.push_back(temp->data);
        temp=temp->next;


    }
    temp=head;
    int i=0;
    int j=st.size()-1;
    while(i<j){
        if(st[i]!=st[j]){
            return false;

        }
        i++;
        j--;
    }
    return true;
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

//////optimal solution using slow and fast

bool pal(node*head){
    node*slow=head;
    node*fast=head;
//find the middle
    while( fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;

    }
    node*first=head;
    node*second=slow->next;

    optimal (slow);
    while(second!=nullptr){
        if(first->data!=second->data){
            return false;
        }
        first=first->next;
        second=second->next;

    }
    return false;
   
}
