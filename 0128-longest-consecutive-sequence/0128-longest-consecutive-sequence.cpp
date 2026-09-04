class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> hash(nums.begin(), nums.end());
        int maxLen = 0;

        for(int num : hash){
            if(hash.find(num-1) == hash.end()){
                int current = num;
                int len = 1;
                while(hash.find(current+1) != hash.end()){
                    current++;
                    len++;
                }
                maxLen = max(maxLen , len);
            }
        }
        return maxLen;
    }
};