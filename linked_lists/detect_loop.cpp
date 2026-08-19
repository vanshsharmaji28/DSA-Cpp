#include <iostream>
using namespace std;
#include <map>
class node{
    public:
        int data;
        node*next;

        node(int val){
            data=val;
            next=nullptr;
        }
};

bool detect_loop(node*head){
    node*slow=head;
    node*fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true ;
        }

    }
    return false;
}

//first logic

node* find_firstnode(node*head){
    node*temp=head;

    map <node*,int> map;
    while(temp!=nullptr){

        if(map[temp]==1){
            return temp;
        }
       
        map[temp]=1;
         temp=temp->next;
    }
    return nullptr;
}

//slow and fast method

node* find_firstnode1(node*head){
    node*slow=head;
    node*fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            
            slow=head;
            while(slow!=fast)
            slow=slow->next;
            fast=fast->next;
            return slow;

        }
    }
    return nullptr;
}