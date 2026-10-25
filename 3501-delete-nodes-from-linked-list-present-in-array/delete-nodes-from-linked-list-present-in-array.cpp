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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        while(head && s.find(head->val)!=s.end()){
            head=head->next;
        }
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(s.find(temp->next->val)==s.end()){
                 temp=temp->next;
            }
            else{
                ListNode* gap=temp;
                while(gap && gap->next!=NULL){
                    if(s.find(gap->next->val)!=s.end()){
                        gap=gap->next;
                    }
                    else{
                        break;
                    }
                }
                temp->next=gap->next;
            }
        }
        return head;
    }
};