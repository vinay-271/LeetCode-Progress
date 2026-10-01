class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 0) return true;
        else if(s.length()%2 != 0) return false;
        stack<char> st;
        for(int i=0 ; i<s.length() ; i++){
            if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')){
                st.push(s[i]);
            }
            else{
                switch(s[i]){
                    case ')': 
                        if(st.empty()) return false;
                        if(st.top() == '(') st.pop();
                        else return false;
                        break;
                    case ']':
                        if(st.empty()) return false;
                        if(st.top() == '[') st.pop();
                        else return false;
                        break;
                    case '}':
                        if(st.empty()) return false;
                        if(st.top() == '{') st.pop();
                        else return false;
                        break;
                    default:
                        return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};