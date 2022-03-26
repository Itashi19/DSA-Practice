//SubsetSum-I gfg

/*
iven a list arr of N integers, print sums of all subsets in it.

 

Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5.


*/
class Solution
{
public:
  void calsub(int ind,int sum,vector<int>&arr,vector<int>&ans,int n)
  {
      if(ind==n)
      {
          ans.push_back(sum);
          return ;
      }
      //pick
      calsub(ind+1,sum+arr[ind],arr,ans,n);
      //not pick
      calsub(ind+1,sum,arr,ans,n);
  }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int>ans;
        calsub(0,0,arr,ans,n);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
