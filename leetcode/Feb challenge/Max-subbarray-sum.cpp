//First approach:O(n3)

/*
1) first i in loop 0 to n-1
2) j in loop j to 0 to n-1
3) loop iterate on elements between i to j
k->i...j
4)sum+=a[k]
5)calculate max sum and return it.


*/

//Second approach 
//linear time



//kadane Algorithm:
int maxSubArray(vector<int>& nums) {
       
        int sum_far=0;
        int maxsum=INT_MIN;
        for(auto i:nums)
        {
            sum_far+=i;     //cxalculate max so far
            maxsum=max(maxsum,sum_far);        // update maximum sum
            if(sum_far<0)
            {
                sum_far=0;     //if sum is less than 0 update it to 0 because if we will initialize with negative number so our overall sum will decrease.
            }
        }
        return maxsum;
    }




*/
