class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
        if(s.length()==1)return 1;
       int l=0;
       int r=0;
       int max_len=0;
       
       unordered_set <char> sets;
       while(r<s.size()){
        while(sets.count(s[r])){
            sets.erase(s[l]);
            l++;
        }
        sets.insert(s[r]);
       int len=(r-l)+1;
       max_len=max(max_len,len);
       r++;
       }
       return max_len;

    }
};
