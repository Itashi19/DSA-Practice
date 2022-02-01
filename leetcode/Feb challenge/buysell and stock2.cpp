//link
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

Solution:
	class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int pro=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])  //reason we can only sell the item if we had buyed it that is first buy then sell
            {
                pro+=prices[i]-prices[i-1];
            }
        }
        return pro;
        
    }
};
