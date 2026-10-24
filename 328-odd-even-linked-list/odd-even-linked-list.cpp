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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* slow=head;
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* fast=head->next;
        ListNode* sec=fast;
        while(slow->next!=NULL && slow->next->next!=NULL){
            slow->next=fast->next;
            slow=slow->next;
            fast->next=slow->next;
            if(fast->next!=NULL) fast=fast->next;
            else break;
        }
        slow->next=sec;
    return head;
    }
};