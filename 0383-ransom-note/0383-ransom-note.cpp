class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> freq;

        // generating frequency table
        for(char ch : magazine){
            freq[ch]++;
        }
        for(int i=0 ; i<ransomNote.size() ; i++){
            if(freq[ransomNote[i]]){
                freq[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};