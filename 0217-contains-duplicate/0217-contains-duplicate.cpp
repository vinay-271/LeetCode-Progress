class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() < 2) return false;
        int n = nums.size();

        unordered_set<int> hash;
        for(int num : nums){
            if(hash.count(num)) return true;
            else{
                hash.insert(num);
            }
        }
        return false;
    }
};