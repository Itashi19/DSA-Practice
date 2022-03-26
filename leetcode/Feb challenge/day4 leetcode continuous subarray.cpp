class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        int s=0,larr=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s+=nums[i]==0?-1:1;
            
            if(s==0)
            {
                if(larr<i+1)
                {
                    larr=i+1;
                }
            }
            else if(m.find(s)!=m.end())
            {
               if(larr < i-m[s])
                    larr= i-m[s]; 
            }
            else
            {
                m[s]=i;
            }
        }
        return larr;
        
    }
};

/*
Approach:


First if we encounter 1 then add +1 
else if we get 0 then sub -1 from the total sum.
1)we need to create an unordered map and store the sum and the index values in it.
now by observation we came to know that 
if sum==0 then there will be equal numbers of 0's and 1's at particular point that is i+1 in the array
or
if your sym is present in the map then update the value of longest subarray by i-m[s]
i.e m[s] represents the index value of that sum in the map.


Time complexity is O(N) as we are using the hashmap here.
*/
