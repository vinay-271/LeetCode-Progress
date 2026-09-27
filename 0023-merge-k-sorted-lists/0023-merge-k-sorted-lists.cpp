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


//  Implemented repeatedly merging 2 linked lists result and lists[i]. Time complexity = O(N*k)



// Need to learn More efficient techniques of DIVIDE & CONQUER and MIN HEAP algorithm.
class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy; // dummy head
        ListNode* tail = &dummy;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while (temp1 != nullptr && temp2 != nullptr) {
            if (temp1->val <= temp2->val) {
                tail->next = temp1;   // attach smaller node
                temp1 = temp1->next;  // move ahead
            } else {
                tail->next = temp2;
                temp2 = temp2->next;
            }
            tail = tail->next; // move tail
        }

        // attach the remaining part
        if (temp1 != nullptr) tail->next = temp1;
        else tail->next = temp2;

        return dummy.next; // skip dummy
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *res = nullptr; //dummy head
        
        for(int i=0 ; i<lists.size() ; i++){
            res = mergeTwoLists(res,lists[i]);
        }
        return res;
    }
};