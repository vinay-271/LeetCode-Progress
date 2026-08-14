class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int slow = 0, fast = 0;
        while(fast < n){
            if(nums[fast] != 0){
                swap(nums[fast],nums[slow]);
                slow++;
            }
            fast++;
        }
        return;
    }
};