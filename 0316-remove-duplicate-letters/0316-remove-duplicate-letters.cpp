class Solution {
public:
    string removeDuplicateLetters(string s) {
        string res = "";
        int freq[26] = {};
        bool visited[26] = {false};
        stack<char> st;

        //frquency of characters
        for(char ch : s){
            freq[ch - 'a']++;
        }

        // traversing each character
        for(char ch : s){
            freq[ch-'a']--;
            if(!visited[ch-'a']){

                // popping st.top() until either st is empty or st.top < ch 
                while(!st.empty() && (st.top() > ch) && (freq[st.top()-'a'] > 0)){
                    visited[st.top()-'a'] = false;
                    st.pop();
                }

                // pushing ch in correct lexicographically order
                st.push(ch);
                visited[ch-'a'] = true;
            }
        }

        //build reverse of correct string
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        //reverse to get the correct string
        reverse(res.begin(),res.end());
        return res;
    }
};