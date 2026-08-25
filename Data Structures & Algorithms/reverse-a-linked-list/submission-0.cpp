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
    ListNode* reverseList(ListNode* head) {
        //iterate
        if(head==nullptr)return nullptr;
        ListNode * temp= head;
        ListNode * newHead=nullptr;
        while(temp!=nullptr){
            ListNode * newNode = new ListNode(temp->val);
            if(newHead==nullptr){
                newHead=newNode;
                temp=temp->next;
                continue;
            }
            newNode->next=newHead;
            newHead=newNode;
            temp=temp->next;


        }
return newHead;
        
    }
};
