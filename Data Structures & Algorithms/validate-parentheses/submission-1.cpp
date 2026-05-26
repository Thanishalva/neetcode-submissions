class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        char op;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='(' || c=='{' || c=='[')st.push(c);
            else{
                 if(st.empty())return false;
                if(c==')'){
                    op=st.top();
                    st.pop();
                    if(op!='(')return false;
                }
                if(c==']'){
                    op=st.top();
                    st.pop();
                    if(op!='[')return false;
                }
                if(c=='}'){
                    op=st.top();
                    st.pop();
                    if(op!='{')return false;
                }
            }
        }
        if(!st.empty())return false;
        return true;
    }
};
