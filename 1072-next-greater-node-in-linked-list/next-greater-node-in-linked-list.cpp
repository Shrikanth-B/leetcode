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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        stack<int> st;
        for (int i = (arr.size() - 1); i >= 0; i--) {
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            int x=arr[i];
            arr[i] = st.empty()?0:st.top();
            st.push(x);
        }
        return arr;
    }
};