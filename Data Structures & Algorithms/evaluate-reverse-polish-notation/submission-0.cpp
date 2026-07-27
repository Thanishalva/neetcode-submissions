class Solution {
public:
    stack <int> st;
    
    void ops(string oper){
        int op1=0;
        int op2=0;
        if(!st.empty()){
             op2=st.top();
        st.pop();
        op1=st.top();
        st.pop();
        }
        if(oper=="+"){
            st.push(op1+op2);
        }else if(oper=="-"){
            st.push(op1-op2);
        }else if(oper=="*"){
            st.push(op1*op2);
        }else{
            st.push(op1/op2);
        }
    
        
    }
    int evalRPN(vector<string>& tokens) {
        
        for(int i=0;i<tokens.size();i++){
                if(tokens[i]=="+" ||tokens[i]=="-" ||tokens[i]=="*" ||tokens[i]=="/" ){
                        ops(tokens[i]);
                }else{
                    st.push(stoi(tokens[i]));
                }
        }
        int num=st.top();
        return num;
    }
};
