class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int lower = -1;
        int left = 0 , right = nums.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == x) {
                lower = mid;
                right = mid-1;
            }
            else if(nums[mid] > x){
                lower = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        if(lower == -1) return nums.size();
        return lower;
    }
};