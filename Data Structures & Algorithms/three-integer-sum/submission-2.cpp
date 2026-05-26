class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector <vector<int>> ans;

       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;i++){
        if(i!=0){
            if(nums[i]==nums[i-1])continue;
        }
        int left=i+1;
        int right=nums.size()-1;
        while(left<right){
            if(nums[i]+nums[left]+nums[right]==0){
                ans.push_back({nums[i],nums[left],nums[right]});
                left++;
                while(left <right && nums[left]==nums[left-1])left++;
            }else if (nums[i]+nums[left]+nums[right]>0){
                right--;
            }else{
                left++;
            }
        }
       }
       return ans;
    }
};
