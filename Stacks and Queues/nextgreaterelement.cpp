class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int>st;
    int n=A.size();
    vector<int>res(n);

    for(int i=n-1;i>=0;i--)
    {
        int curr=A[i];
        while(!st.empty() && curr>=st.top())
        {
            st.pop();
        }
       res[i]=st.empty()?-1:st.top();
       st.push(curr);

    }
    return res;
  
    }
};