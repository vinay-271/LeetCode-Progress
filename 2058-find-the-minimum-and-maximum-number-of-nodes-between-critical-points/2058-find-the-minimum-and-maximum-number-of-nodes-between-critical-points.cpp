class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res = {-1, -1};

        if (!head || !head->next || !head->next->next)
            return res;

        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        ListNode* temp3 = head->next->next;

        int pos = 2;

        int firstCritical = -1;
        int previousCritical = -1;

        int minDistance = INT_MAX;

        while (temp3) {

            // Check if temp2 is a critical point
            bool isCritical =
                (temp2->val > temp1->val && temp2->val > temp3->val) ||
                (temp2->val < temp1->val && temp2->val < temp3->val);

            if (isCritical) {

                // First critical point
                if (firstCritical == -1) {
                    firstCritical = pos;
                }
                else {
                    // Distance from previous critical point
                    minDistance = min(
                        minDistance,
                        pos - previousCritical
                    );
                }

                // Current critical point becomes previous
                previousCritical = pos;
            }

            pos++;

            temp1 = temp1->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }

        // Fewer than 2 critical points
        if (firstCritical == previousCritical)
            return res;

        int maxDistance = previousCritical - firstCritical;

        res[0] = minDistance;
        res[1] = maxDistance;

        return res;
    }
};