class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minval = prices[0], maxprofit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minval)
                minval = prices[i];
            maxprofit = max(maxprofit, (prices[i] - minval));
        }
        return maxprofit;
    }
};