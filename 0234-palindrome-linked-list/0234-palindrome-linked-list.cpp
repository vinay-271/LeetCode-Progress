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
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        ListNode *slow = head , *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reverse LL slow pointer onwards
        ListNode *temp = slow;
        stack<int> st;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(!st.empty()){
            if(temp->val != st.top()) return false;
            st.pop();
            temp = temp->next;
        }
        return true;
    }
};