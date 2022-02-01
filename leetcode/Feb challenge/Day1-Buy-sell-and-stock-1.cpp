
//Brute force approach
O(n2) timee and O(1) space

  int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        for (int i = 0; i < prices.size()- 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int profit = prices[j] - prices[i];
                if (profit > maxprofit)
                    maxprofit = profit;
            }}
        return maxprofit;
    }





//max profit= high peak -low peak

//first we need to buy and then we need to seell ->approach

//Most optimized approach is O(n) time and O(1) space
//In this approach we basically first haveto calculate minsofar in the array and then store it in a variable 
//2. Sub  cuurent value-minsofar and compare with previous profit and then return the maximum profit.

/*

121. Best Time to Buy and Sell Stock
Easy

13724

476

Add to List

Share
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

*/
//problem link:https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Solution:
int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
       int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
          minprice=min(minprice,prices[i]);  //calculating minsofar in the array
            maxprofit=max(maxprofit,prices[i]-minprice); //finding the max profit
            
        }
        return maxprofit;
    }

