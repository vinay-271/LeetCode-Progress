class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        unordered_map<int,int> hash;
        vector<int> res(2,-1);
        for(int i=0 ; i<n ; i++){
            if(hash.count(t-nums[i])){
                res[0] = hash[t-nums[i]];
                res[1] = i;
                return res;
            }
            else{
                hash[nums[i]] = i;
            }
        }
        return res;
    }
};