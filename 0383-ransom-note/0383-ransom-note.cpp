class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // generating frequency table
        for(char ch : magazine){
            freq[ch - 'a']++;
        }
        for(int i=0 ; i<ransomNote.size() ; i++){
            if(freq[ransomNote[i] - 'a']){
                freq[ransomNote[i] - 'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};