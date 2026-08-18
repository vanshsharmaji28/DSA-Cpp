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

//my solution

node* middleNode(node* head) {
        node*temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int middle=(count/2)+1;
        temp=head;
        while(temp!=nullptr){
            middle=middle-1;
            if(middle==0){
                break;
            }
            temp=temp->next;

        }
        return temp;
    }

//optimal solutiion========

node*optimal(node*head){
    node*slow=head;
    node*fast=head;

    while(fast->next!=nullptr && fast!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

int main() {
     
    return 0;
}