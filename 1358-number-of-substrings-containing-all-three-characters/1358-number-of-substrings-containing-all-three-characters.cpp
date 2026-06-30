class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0 , right = 0;
        unordered_map<char,int> presence;
        bool leftChng = false;
        int count = 0;
        while(left<s.size() && right<s.size()){
            // presence[s[left]]++;
            if(!leftChng) presence[s[right]]++;
            if(presence['a']!=0 && presence['b']!=0 && presence['c']!=0){
                count += (s.size() - right);
                presence[s[left]]--;
                left++;
                leftChng = true;
                continue;
            }
            right++;
            leftChng = false;
        }
        return count;
    }
};