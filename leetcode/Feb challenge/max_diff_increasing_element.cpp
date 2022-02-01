//2016. Maximum Difference Between Increasing Elements

Link: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
Solution:
	
	 int maximumDifference(vector<int>& nums) {
        int maxi=-1,mini=nums[0];
        for(auto i:nums)
        {
            if(i<mini)
            {
                mini=i;
            }
            maxi=max(maxi,i-mini);  //updating maximun
        }
        return maxi==0?-1:maxi;
    }
    
    //find min and update it 
    //further find max so far

