class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector <int> index;
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                index.push_back(left+1);
                index.push_back(right+1);
                return index;
            }
            if(numbers[left]+numbers[right]<target){
                left++;
            }else{
                right--;
            }
        }

        return index;
    }
};