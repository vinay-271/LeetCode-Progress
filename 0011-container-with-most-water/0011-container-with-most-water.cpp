class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int left = 0, right = n-1;
        int max_area = 0;
        while(left < right){
            int area = (right - left) * min(h[left],h[right]);
            max_area = max(max_area , area);
            if(h[left] <= h[right]) left++;
            else right--;
        }
        return max_area;
    }
};