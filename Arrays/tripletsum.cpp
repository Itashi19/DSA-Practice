/*
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
*/



unordered_set<int>s;
       for(int i=0;i<n-1;i++){
           unordered_set<int>s;
           for(int j=i+1;j<n;j++){
               int y=X-(A[i]+A[j]);
               if(s.find(y)!=s.end()){
                   return true;
               }
               s.insert(A[j]);
           }
           
       }return false;