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

node*brute(node*head, int n){
    node*temp=head;
    int count =0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    if(count==n){
        node*del=head;
        head=head->next;
        delete del;
        return head;
    }

    int index= count-n;
    temp=head;

    while(temp!=nullptr){
        index--;
        if(index==0){
            break;
        }
        temp=temp->next;
    }
    node*del=temp->next;
    temp->next=temp->next->next;
    delete del;
    return head;

}

node*optimal(node*head ,int n){
    node*fast=head;
    node*slow=head;

    for(int i=0;i<n;i++){
        
        fast=fast->next;
        slow=head;
        
    }
    while(fast!=nullptr ){
        fast=fast->next;
        slow=slow->next;
    }
    node*del=slow->next;
    slow->next=slow->next->next;
    delete del;
    return head;
    
}