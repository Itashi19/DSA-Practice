//max product subarray:


class Solution {
public:
    int maxProduct(vector<int>& a){
        
        int minp=a[0];
        int maxp=a[0];
        int ans=a[0];
        
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            int c1=minp*a[i];
            int c2=maxp*a[i];
            
            minp=min(a[i],min(c1,c2));
            maxp=max(a[i],max(c1,c2));
            
            ans=max(ans,maxp);
                       
                       }
        return ans;
    }
};
