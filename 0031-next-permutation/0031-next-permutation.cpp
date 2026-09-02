class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakPoint = -1;
        for(int i=n-2 ; i>=0 ; i--){
            if(nums[i] < nums[i+1]) {
                breakPoint = i;
                break;
            }
        }
        if(breakPoint < 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1; i>= 0 ; i--){
            if(nums[i] > nums[breakPoint]){
                swap(nums[breakPoint] , nums[i]);
                break;
            }
        }
        reverse(nums.begin()+breakPoint+1 , nums.end());
        return;
    }
};