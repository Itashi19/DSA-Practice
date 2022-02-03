//link https://leetcode.com/problems/4sum-ii/
/*
Algorithm:
	1)find all pairs of sum from a to b and store the freq of sum in map.
	2)Now again find sum of c and d and chaeck whether negative of this sum id present in the map
	3)if yes,then increase the count otherwise continue


*/





//Solution:

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>f;
        int n=nums1.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s=nums1[i]+nums2[j];
                f[s]++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s2=nums3[i]+nums4[j];
                auto it=f.find(-s2);
                if(it!=f.end()){
                       c+= (it->second);    
                    
                }
            }
        }
        return c;
    }
};
