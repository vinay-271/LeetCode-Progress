class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(auto s : patterns){
            if (word.find(s) != std::string::npos) {
                // 's' is a substring of 'word'
                count++;
            }
        }
        return count;
    }
};