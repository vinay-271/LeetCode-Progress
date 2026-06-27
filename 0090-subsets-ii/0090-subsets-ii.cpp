class Solution {
public:
    void getSubset(vector<int>& nums , vector<vector<int>>& allSubset , vector<int>& ans , int i){
        if(i == nums.size()){
            allSubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubset(nums,allSubset,ans,i+1);
        ans.pop_back();

        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }

        getSubset(nums,allSubset,ans,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allSubset;
        vector<int> ans;
        getSubset(nums,allSubset,ans,0);
        return allSubset;
    }
};