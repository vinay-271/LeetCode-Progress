class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        sort(nums.begin(),nums.end());
        int k = n-1;
        int count = 0;
        while(k>=2){
            int left = 0 , right = k-1;
            while(left < right){
                if((nums[left] + nums[right]) > nums[k]){
                    count += (right - left);
                    right--;
                }
                else{
                    left++;
                }
            }
            k--;
        }
        return count;
    }
};