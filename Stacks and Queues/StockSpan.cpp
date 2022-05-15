
/*
901. Online Stock Span
Medium

2657

208

Add to List

Share
Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backward) for which the stock price was less than or equal to today's price.

For example, if the price of a stock over the next 7 days were [100,80,60,70,60,75,85], then the stock spans would be [1,1,1,2,1,4,6].
Implement the StockSpanner class:

StockSpanner() Initializes the object of the class.
int next(int price) Returns the span of the stock's price given that today's price is price.
 

Example 1:

Input
["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
[[], [100], [80], [60], [70], [60], [75], [85]]
Output
[null, 1, 1, 1, 2, 1, 4, 6]



*/

class StockSpanner {
public:
    StockSpanner() {
        
    }
   
    
   
       stack<int> stk;
    vector<int> vec;
    int i=0;
    
  
    
    int next(int price) {
        vec.push_back(price);
        int res;
        while(!stk.empty() && price>=vec[stk.top()]) stk.pop();
        
        res = stk.empty() ? (i+1) : (i-stk.top());
      
        stk.push(i++);
        return res;}
};
