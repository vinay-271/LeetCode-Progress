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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res = {-1,-1};
        if(!head || !head->next || !head->next->next) return res;
        ListNode *temp1 , *temp2 , *temp3;
        temp1 = head;
        temp2 = temp1->next;
        temp3 = temp2->next;

        vector<int> positions;
        int pos = 2; //position of temp2 pointer

        int Min = INT_MAX;  
        while(temp3){
            if((temp2->val > temp1->val) && (temp2->val > temp3->val)){
                positions.push_back(pos);
            }
            else if((temp2->val < temp1->val) && (temp2->val < temp3->val)){
                positions.push_back(pos);
            }
            int n = positions.size();
            pos++;
            temp1 = temp1->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
            if(n > 1){
                Min = min(Min , (positions[n-1] - positions[n-2]));
            }
        }
        int n = positions.size();
        if(n < 2) return res;
        int Max = positions[n-1] - positions[0];
        res[0] = Min;
        res[1] = Max;
        return res;
    }
};