class Solution {
public:
    void getSubset(vector<int>& nums,vector<vector<int>>& allSubset ,vector<int>& ans, int i=0){
        if(i == nums.size()){
            allSubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubset(nums,allSubset,ans,i+1);
        ans.pop_back();

        getSubset(nums,allSubset,ans,i+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubset;
        vector<int> ans;
        getSubset(nums,allSubset,ans,0);
        return allSubset;
    }
};