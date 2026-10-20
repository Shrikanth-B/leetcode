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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        unordered_map<int, int> s;
        ListNode* temp = head;
        while (temp) {
            s[(temp->val)]++;
            temp = temp->next;
        }
        while (head->next!=NULL && s[head->val] > 1) {
            head = head->next;
        }
        if(head->next==NULL && s[head->val]>1) return NULL;
        temp = head;
        while (temp->next != NULL) {
            if (s[temp->next->val] == 1) {
                temp = temp->next;
            } else {
                ListNode* eg = temp;
                while (eg->next != NULL && s[eg->next->val] > 1) {
                    eg = eg->next;
                }
                temp->next = eg->next;
            }
        }
        return head;
    }
};