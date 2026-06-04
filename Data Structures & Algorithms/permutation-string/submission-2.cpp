class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1_window(26,0);
        vector <int> s2_window(26,0);

        int l=0;
        int r=0;
        for(int i=0;i<s1.length();i++)
            s1_window[s1[i]-'a']++;
        
        while(r<s2.length()){
            s2_window[s2[r]-'a']++;

            if((r-l+1)>s1.length()){
                s2_window[s2[l]-'a']--;
                l++;

            }


            if(s1_window == s2_window)return true;
            r++;
        }
        return false;
        


        
    }
};
