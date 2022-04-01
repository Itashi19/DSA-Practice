/*
Max Sum Subarray of size K 
Basic Accuracy: 52.08% Submissions: 21250 Points: 1
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

 

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.


*/

class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &a , int n){
        // code here 
        int i=0,j=0,mx=INT_MIN;
        int s=0;
        while(j<n)
        {
            s+=a[j];
            if(j-i+1<k)
            j++;
            else if(j-i+1==k)
            {
                mx=max(s,mx);
                s-=a[i]; //from front of window;
                 i++;j++;
            }
           
            
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends