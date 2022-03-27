
//permutations of a array of numbers
/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]




*/






class Solution {
public:
    
    void calper(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[])
    {
        if(nums.size()==ds.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])   //to check whether the elememnt is taken from freq map or not
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                calper(ds,nums,ans,freq);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
         freq[i]=0;
        calper(ds,nums,ans,freq);
        return ans;
    }
};
