class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0 , right = 0;
        int size = s.size();
        int presence[] = {0,0,0};
        // bool leftChng = false;
        int count = 0;
        for( ; right<size ; right++){
            presence[char(s[right]) - 97]++;
            while(presence[0]!=0 && presence[1]!=0 && presence[2]!=0){
                count += (s.size() - right);
                presence[char(s[left]) - 97]--;
                left++;
                // leftChng = true;
                continue;
            }
        }
        return count;
    }
};