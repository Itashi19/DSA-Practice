/*

Minimum swaps and K together 
Medium Accuracy: 47.98% Submissions: 54575 Points: 4
Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

Example 1:

Input : 
arr[ ] = {2, 1, 5, 6, 3} 
K = 3
Output : 
1
Explanation:
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- 
arr[] = {2, 1, 3, 6, 5}

*/

//Solution:
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int good=0,bad=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)  //to calculate good values that is less than k
            {
                good++;
            }
            
        }
        for(int j=0;j<good;j++)
        {
            if(arr[j]>k)  //to find bad value in particular window
            bad++;
        }
        int i=0,j=good,ans=bad;
        while(j<n)
        {
            if(arr[i]>k)
            bad--;              //sub bad value from prev window and increement in the next
         if(arr[j]>k)
            bad++;
        
        ans=min(ans,bad);   
        i++,j++;   //return min value
        }
        return ans;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends