class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //hashing method
        int n = nums.size();
        if(n==1) return nums[0];

        unordered_map<int,int> hash;
        int maxKey = -1;
        int i=0 , j=0;
        while(i<n){
            if(nums[i] == nums[j]){
                hash[nums[i]]++;
                if(hash[nums[i]] > (n/2)){
                    maxKey = nums[i];
                    break;
                }
                j++;
            }
            else{
                i=j;
            }
        }
        return maxKey;
    }
};