class Solution {
public:
    // O(n) time and O(1) space
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int posIdx = 0 , negIdx = 1;
        for(int i=0 ; i<n ; i++){
            if(nums[i] > 0){
                res[posIdx] = nums[i];
                posIdx += 2;
            }
            else{
                res[negIdx] = nums[i];
                negIdx += 2;
            }
        }
        return res;
    }  
};