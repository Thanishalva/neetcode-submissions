class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
        if(s.length()==1)return 1;
        int l=0;
        int r=l+1;
        int len=1;
        int max_len=1;
        while(l<s.size() && r<s.size()){
            char c=s[r];
            string sub_str=s.substr(l,r-l+1);
            int count_num=count(sub_str.begin(),sub_str.end(),c);
            if(count_num>1){
                len=1;
                l=r;
                r=l+1;

            }else{
                len++;
                max_len=max(max_len,len);
                r++;
            }



        }

        return max_len;

    }
};
