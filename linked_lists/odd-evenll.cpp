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
node*odd_even(node*head){
    node*temp=head;
    vector<int>v;
    if(head==nullptr || head->next==nullptr){
        return head;
}
    while(temp!=nullptr){
        v.push_back(temp->data);

        
        if(temp->next==nullptr){
            break;
            
        }
        temp=temp->next->next;
    }
    temp=head->next;
    while(temp!=nullptr){
        v.push_back(temp->data);
        if(temp->next==nullptr){
            break;
            
        }
        temp=temp->next->next;

    }
    int i=0;
    temp=head;

    while(temp!=nullptr){
        temp->data=v[i];
        temp=temp->next;
        i++;

    }
    return head;

}
//optimal
node*odd_even(node*head){
    node*odd=head;
    node*even=head->next;
    node*evenhead=head->next;

   if(head==nullptr && head->next==nullptr){
    return head;
    
   }
     while(even!=nullptr && even->next!=nullptr){
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next->next;
        

    }
    odd->next=evenhead;
    return head;


}