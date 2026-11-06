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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                 ListNode* tomove=temp;
                while(tomove!=NULL && tomove->next!=NULL && tomove->next->val==val){
                    tomove=tomove->next;
                }
                temp->next=tomove->next;
            }
            else{
                temp=temp->next;
            }
        }
    return head;
    }
};