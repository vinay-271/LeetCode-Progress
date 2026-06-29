class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        sort(candidates.begin(),candidates.end());
        combSum(candidates , result , ans , target , 0);
        return result;
    }
    void combSum(vector<int>& candidates , vector<vector<int>>& result ,vector<int>& ans , int tgt , int start){
        //base case
        if(tgt == 0){
            result.push_back(ans);
            return;
        }


        for(int i=start ; i<candidates.size() ; i++){
            ans.push_back(candidates[i]);
            int newTgt = tgt - candidates[i];
            if(newTgt >= 0) combSum(candidates , result , ans , newTgt , i);
            ans.pop_back();
        }
    }
};