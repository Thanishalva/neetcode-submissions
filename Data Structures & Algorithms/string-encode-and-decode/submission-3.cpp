class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str="";
      
            for(string s : strs){
                int len=s.length();
                encoded_str+=to_string(len);
                encoded_str+="#";
                encoded_str+=s;
            }
            return encoded_str;
    }

    vector<string> decode(string s) {
       
        vector <string> strs;
        int len=0;
        string construct_str;
        string len_str="";
            for(int i=0;i<s.length();i++){
                char c=s[i];
                if(len==0 && (c>='0' && c<='9')){
                    len_str+=c;

                    continue;
                }
                if(len==0 && c=='#'){
                    len=stoi(len_str);
                    len_str="";
                    if(len==0)strs.push_back("");
                    continue;
                }
                construct_str+=c;
                len--;
                if(len==0){
                    strs.push_back(construct_str);
                    construct_str="";
                }
                

            }
            return strs;
    }
};
