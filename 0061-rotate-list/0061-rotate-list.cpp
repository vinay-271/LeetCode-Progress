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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head;
        if(temp == nullptr || k==0 || temp->next == nullptr) return head;

        int len = 1;
        while(temp->next != nullptr){
            len++;
            temp = temp->next;
        }
        temp->next = head;

        k = k % len;
        int count = len-k;
        while(count--){
            temp = temp->next;
            head = head->next;
        }
        temp->next = nullptr;
        return head;
    }
};