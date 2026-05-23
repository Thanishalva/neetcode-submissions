class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector <int> prods(nums.size());
            vector <int> prefix(nums.size(),1);
             vector <int> suffix(nums.size(),1);
             for(int i=1;i<nums.size();i++){
                prefix[i]=nums[i-1]*prefix[i-1];
             }
             for(int i=nums.size()-2;i>=0;i--){
                suffix[i]=nums[i+1]*suffix[i+1];

             }

             for(int i=0;i<nums.size();i++){
                if(i==0){
                    prods[i]=suffix[i];
                    continue;

                }
                if(i==nums.size()-1){
                    prods[i]=prefix[i];
                    continue;
                }
                prods[i]=prefix[i]*suffix[i];

             }
            return prods;
    }
};
