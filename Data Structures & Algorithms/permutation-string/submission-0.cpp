class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) return false;

        vector<int> s1_vec(26, 0);
        vector<int> s2_vec(26, 0);

        for (int i = 0; i < s1.length(); i++) {
            s1_vec[s1[i] - 'a']++;
            s2_vec[s2[i] - 'a']++;
        }

        int l = 0;
        int r = s1.length() - 1;

        while (r < s2.length()) {

            if (s1_vec == s2_vec) return true;

            s2_vec[s2[l] - 'a']--;  // remove left char
            l++;
            r++;

            if (r < s2.length()) {
                s2_vec[s2[r] - 'a']++;  // add new right char
            }
        }

        return false;
    }
};