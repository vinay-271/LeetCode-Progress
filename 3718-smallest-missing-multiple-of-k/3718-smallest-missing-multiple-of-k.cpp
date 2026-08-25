class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> hash(nums.begin(),nums.end());
        int ans = k;
        while(hash.count(ans)){
            ans += k;
        }
        return ans;
    }
};