class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;
        for(char ch : s){
            hash[ch]++;
        }
        for(char ch : t){
            if(hash[ch] == 0) return false;
            hash[ch]--;
        }
        for(const auto &[_,count] : hash){
            if(count) return false;
        }
        return true;
    }
};