class Solution {
public:
    // O(n) time and O(n) space
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res,pos,neg;
        int n = nums.size();
        for(int num : nums){
            if(num<0) neg.push_back(num);
            else pos.push_back(num);
        }
        
        for(int i=0 , j=0 , k=0; i<n ; i++){
            if(i%2) res.push_back(neg[k++]);
            else res.push_back(pos[j++]);
        }
        return res;
    }
};