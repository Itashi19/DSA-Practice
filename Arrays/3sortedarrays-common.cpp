/*

Common elements 
Easy Accuracy: 38.69% Submissions: 93599 Points: 2
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.

*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            
             unordered_set <int> uset,uset2,uset3;
             vector <int>ans;
    for(int i=0;i<n1;i++){
        uset.insert(a[i]);
    }
     for(int i=0;i<n2;i++){
        uset2.insert(b[i]);
    }
      // checking if elements of 3rd array are present in first 2 sets
    for(int i=0;i<n3;i++){
        if(uset.find(c[i])!=uset.end() && uset2.find(c[i])!=uset.end()){
            // using a 3rd set to prevent duplicates
            if(uset3.find(c[i])==uset3.end())
                //cout<<c[i]<<" ";
                ans.push_back(c[i]);
            uset3.insert(c[i]);
          
        }
        
    }   
    return ans;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
