class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start == goal) return 0;
        int big = max(start,goal);
        int bits=0;
        if(big == 0) bits = 1;
        bits = int(log2(big))+1;

        string strStart,strGoal;
        strStart = bitset<32>(start).to_string().substr(32-bits);
        strGoal = bitset<32>(goal).to_string().substr(32-bits);

        reverse(strStart.begin(),strStart.end());
        reverse(strGoal.begin(),strGoal.end());

        int n = strGoal.size();
        int count=0;
        for(int i=0 ; i<n ; i++){
            if(strGoal[i] != strStart[i]) count++;
        }

        return count;
    }
};