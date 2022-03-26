//Subset Sum 2
/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]




*/

class Solution {
public:
    
    void subsetfunc(int ind,vector<vector<int>>&ans,vector<int>&nums,vector<int>&ds)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
                continue;
            ds.push_back(nums[i]);
            subsetfunc(i+1,ans,nums,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        subsetfunc(0,ans,nums,ds);
        return ans;
    }
};
