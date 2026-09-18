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
    ListNode* swapNodes(ListNode* head, int k) {
        size_t len = 0;
        ListNode *temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        if(k == (len-k+1)) return head;

        ListNode *frontPtr = head, *endPtr;
        int i=1;
        while(i<k){
            i++;
            frontPtr = frontPtr->next;
        }
        endPtr = head;
        i = 1;
        while(i < (len-k+1)){
            i++;
            endPtr = endPtr->next;
        }
        int t = (frontPtr->val);
        (frontPtr->val) = (endPtr->val);
        (endPtr->val) = t;
        return head;
    } 
};