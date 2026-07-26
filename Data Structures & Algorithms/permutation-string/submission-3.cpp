class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
               vector <int> s1Hash(26,0);
               vector <int> s2Hash(26,0);


               int s1size=s1.size();
               int s2size=s2.size();
               if(s1size>s2size)return false;
               
               int left=0;
               int right=0;

               while(right<s1size){
                s1Hash[s1[right]-'a']++;
                s2Hash[s2[right]-'a']++;
                right++;
               }
            if(s1Hash==s2Hash)return true;
               
            while(right<s2size){
                s2Hash[s2[left]-'a']--;
                left++;
                
                
                    s2Hash[s2[right]-'a']++;


            
                right++;
                if(s1Hash==s2Hash)return true;




            }
            return false;
        }
};
