class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int> s1_vec(26,0);
     
        for(int i=0;i<s1.length();i++){
            s1_vec[s1[i]-'a']++;
        }
       
        int l=0;
        int r=s1.length()-1;
        while(r<s2.length()){
            
            vector<int> s2_vec(26,0);
            for(int i=l;i<=r;i++){
                    s2_vec[s2[i]-'a']++;
            }
            if(s1_vec == s2_vec)return true;
            l++;
            r++;
        }

return false;

        
    }
};
