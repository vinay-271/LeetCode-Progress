class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //sorting first method
        int n = nums.size();
        if(n==1) return nums[0];

        sort(nums.begin(),nums.end());
        int count = 0 , maxIdx = -1;
        int i=0 , j=0;
        while(i<n){
            if(nums[i] == nums[j]){
                count++;
                if(count > (n/2)){
                    maxIdx = j;
                    break;
                }
                j++;
            }
            else{
                count = 0;
                i=j;
            }
        }
        return nums[maxIdx];
    }
};