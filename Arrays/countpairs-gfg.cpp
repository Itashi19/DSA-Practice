/*
Count pairs with given sum 
Easy Accuracy: 41.59% Submissions: 97788 Points: 2
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/


// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        //this is an n2 approach
       /* int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(arr[i]+arr[j]==k)
            c++;
            }
        }
        return c;
    }*/
    
    
    
    //n approach by using unordered map....
    //we stored its frequency and acccording to it  add in the answer.
    unordered_map<int,int>m;
    int s=0;
    for(int i=0;i<n;i++)
    {
       int b=k-arr[i];
       if(m[b])
       {
           s+=m[b];
       }
       m[arr[i]]++;
    }
    return s;}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
