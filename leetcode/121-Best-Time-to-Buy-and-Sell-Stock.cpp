class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int l = 0;
        int r = 1;

        int maxProfit = 0;
        int n = prices.size();
        
        while(r < n){
            if(prices[l] < prices[r]){
                int currProfit = prices[r] - prices[l];
                maxProfit = max(maxProfit, currProfit);
            }
            else
                l = r;
            
            r++;
        }

        return maxProfit;
    }
};
