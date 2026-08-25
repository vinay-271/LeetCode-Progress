class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        unordered_map<int,int> hash;
        for(int i=0 ; i<n ; i++){
            hash[nums[i]] = i;
        }
        int i=1;
        while(true){
            if(hash.count(k*i)) i++;
            else return (k*i);
        }
        return k;
    }
};