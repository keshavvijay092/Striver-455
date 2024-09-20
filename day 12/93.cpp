class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxProfit = 0;
        int n = prices.size();

        for(int i=1;i<n;i++)
        {
            int sell = prices[i];

            if(buy>sell)
            {
                buy = sell;
            }
            if(buy<sell)
            {
               maxProfit = max(maxProfit,sell-buy);
            }
        }
        return maxProfit;
        }
    
};
