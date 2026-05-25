class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;

        int maxlen=1;
        unordered_set  <int> sets;
        for(int item : nums){
                sets.insert(item);
        }
        for(auto it : sets){
            int item=it;
                int len=1;
                if(sets.count(item-1)){

                    continue;
                }
                int temp=item;
                while(sets.count(temp+1)){
                    len++;
                    temp=temp+1;
                }
                maxlen=max(len,maxlen);
        }

        return maxlen;
    }
};