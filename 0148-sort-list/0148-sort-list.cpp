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
    ListNode* sortList(ListNode* head) {
        if(!head || !(head->next)) return head;

        ListNode *middle = mid(head);
        ListNode *temp = middle->next;

        middle->next = nullptr;
        
        head = sortList(head);
        temp = sortList(temp);
        return merge(head,temp);
    }

    ListNode *merge(ListNode *head1 , ListNode *head2){
        if(!head1 || !head2) return (head1==nullptr)? head2 : head1;

        ListNode *temp1 = head1 , *temp2 = head2;
        ListNode *dummyHead = new ListNode();
        ListNode *temp = dummyHead;

        while(temp1 && temp2){
            if(temp1->val >= temp2->val){
                temp->next = temp2;
                temp2 = temp2->next;
                temp = temp->next;
                temp->next = nullptr;
            }
            else{
                temp->next = temp1;
                temp1 = temp1->next;
                temp = temp->next;
                temp->next = nullptr;
            }
        }
        if(temp1){
            temp->next = temp1;
        }
        if(temp2){
            temp->next = temp2;
        }

        return dummyHead->next;
    }

    ListNode* mid(ListNode* head){
        ListNode *slow, *fast;
        slow = fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};