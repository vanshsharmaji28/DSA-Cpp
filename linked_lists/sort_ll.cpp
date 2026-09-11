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

ListNode*merge_two_sorted_lists(ListNode*head1, ListNode*head2){
    ListNode*t1=head1;
    ListNode*t2=head2;
    ListNode*dummy=new ListNode(-1);
    ListNode*temp=dummy;

    while (t1!=nullptr && t2!=nullptr)
    {
        if(t1->val<t2->val){
            temp->next=t1;
            temp=t1;
            t1=t1->next;

        }
        else{
             temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
    }
    if(t1!=nullptr){
        temp->next=t1;
    }
    else{
        temp->next=t2;
    }
    return dummy->next;
    
}

 //brute force
 //time complexity ==O(n)+O(nlogn)+O(n)
 //space complexity == O(n)

ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        vector<int> v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=v[i];
            i++;
            temp=temp->next;
        }
        return head;

    }



    ListNode* middle(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }


//optimal solution
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode*mid=middle(head);
        ListNode*lefthead=head;
        ListNode*righthead=mid->next;

        mid->next=nullptr;
        lefthead=sortList(lefthead);
        righthead=sortList(righthead);

        return merge_two_sorted_lists(lefthead,righthead);
    }
};
