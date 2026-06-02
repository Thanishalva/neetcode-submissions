class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxf=0;
        int maxlen=0;
        int r=0;
        unordered_map <int,int> hash;
        while(r<s.length()){
                hash[s[r]-'A']++;
                for(int i=0;i<26;i++){
                        maxf=max(maxf,hash[i]);
                }
                while((r-l+1)-maxf>k){
                    hash[s[l]-'A']--;
                    l++;
                }
                maxlen=max(maxlen,r-l+1);
                r++;
        }
        return maxlen;
    }
};
