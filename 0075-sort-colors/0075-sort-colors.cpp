class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return;
        int left = 0 , right = n-1;
        //bring 0 to front
        while(left<right){
            if(nums[left] != 0 && nums[right] == 0){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
            else if(nums[left]==0) left++;
            else if(nums[right] != 0) right--;
        }

        left = 0 , right = n-1;
        while(left<right){
            if(nums[left] == 0) left++;
            else if(nums[left] == 2 && nums[right] == 1){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
            else if(nums[right] == 2) right--;
            else if(nums[left] == 1) left++;
        }
        return;
    }
};