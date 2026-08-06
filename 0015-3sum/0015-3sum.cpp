class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        if(n < 3) return res;

        int i=0;
        sort(nums.begin() , nums.end());
        while(i < n-2){
            if((i>0) && (nums[i] == nums[i-1])){
                i++;
                continue;
            }
            if(nums[i] > 0) break;

            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0) left++;
                else if(sum > 0) right--;
                else{
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while((left < right) && nums[left] == nums[left-1]){
                        left++;
                    }
                    while((right > left) && nums[right] == nums[right + 1]){
                        right--;
                    }
                }
            }
            i++;
        }
        return res;
    }
};