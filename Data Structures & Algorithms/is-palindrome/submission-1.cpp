class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9') ){
                char c = s[i];
                temp+=tolower(c);
            }
        }

        int left=0;
        int right=temp.length()-1;
        while(left<right){
            if(temp[left]!=temp[right])return false;
            left++;
            right--;

        }
        return true;
    }
};
