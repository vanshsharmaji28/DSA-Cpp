#include <iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(int v){
            val=v;
            next=nullptr;
        }

};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode*t1=l1;
        ListNode*t2=l2;
        ListNode*dummy =new ListNode(-1);
        ListNode*temp=dummy;
       
        int carry=0;
        while(t1!=nullptr || t2!=nullptr){
           int sum =carry;
           if(t1!=nullptr){
            sum+=t1->val;
            t1=t1->next;
           }
           if(t2!=nullptr){
            sum+=t2->val;
            t2=t2->next;
           }
           temp->next=new ListNode(sum%10);
           temp=temp->next;
           carry=sum/10;

        }
        if(carry!=10){
            temp->next=new ListNode(carry);

        }
        return dummy->next;

    }
};