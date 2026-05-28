class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int l=0;
        int r=0;
        while(l<prices.size() && r<prices.size()){
        int profit=prices[r]-prices[l];
            if(profit<0){
                l++;
            }else{
                max_profit=max(profit,max_profit);
                r++;
            }
        }
        return max_profit;
    }
};
