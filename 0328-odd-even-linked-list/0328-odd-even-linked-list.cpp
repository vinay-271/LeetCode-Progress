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
        if(!head || !head->next || !head->next->next) return head;
        ListNode *evenHead, *tempOdd, *tempEven;
        tempOdd = head;
        tempEven = evenHead = head->next;

        while(true){
            tempOdd->next = tempOdd->next->next;
            tempOdd = tempOdd->next;

            tempEven->next = tempEven->next->next;
            tempEven = tempEven->next;

            if(!(tempOdd->next) || !(tempEven->next)){
                // tempEven->next = NULL;
                tempOdd->next = evenHead;
                break;
            }
        }
        return head;
    }
};