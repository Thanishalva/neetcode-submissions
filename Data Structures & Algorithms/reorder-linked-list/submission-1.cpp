/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next==nullptr)return;
    // find mid point
    ListNode * slow = head;
    ListNode * fast = head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    

    ListNode * second= slow->next;
    slow->next=nullptr;

    //reverse 2nd half
    ListNode * curr = second;
    ListNode * prev=nullptr;
    ListNode * next=nullptr;
    while(curr !=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    second = prev;
    ListNode * first = head;
    head=nullptr;

    ListNode * tail=nullptr;

    ListNode * mover1st= first;
    ListNode * mover2nd=second;
    
    head=mover1st;
    tail=head;


    mover1st=mover1st->next;
    tail->next=mover2nd;
    mover2nd=mover2nd->next;
    tail=tail->next;

    while(mover1st!=nullptr && mover2nd !=nullptr){
        tail->next=mover1st;
        mover1st=mover1st->next;
        tail=tail->next;
        tail->next=mover2nd;
        mover2nd=mover2nd->next;
        tail=tail->next;


    }
    if(mover1st!=nullptr){
        tail->next=mover1st;
        tail=tail->next;
    }
    if(mover2nd!=nullptr){
        tail->next=mover2nd;
        tail=tail->next;
    }










    }
};
