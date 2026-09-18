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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // calc length of LL
        int len = [](ListNode *temp)->int{
            int length = 0;
            while (temp != nullptr) {
                length++;
                temp = temp->next;
            }
            return length;
        }(head);

        if(len == n) return head->next;

        int i=1;
        ListNode *temp = head;
        while(i<(len-n)){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};