class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewel=0;
        unordered_set<char> ch;
        for(int i=0 ; i<jewels.size() ; i++){
           ch.insert(jewels[i]); 
        }
        for(char c:stones){
            if(ch.contains(c)) jewel++;
        }
        return jewel;
    }
};