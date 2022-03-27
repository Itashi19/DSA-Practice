




class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>path;
        calpart(0,s,res,path);
        return res;
    }
    void calpart(int ind,string s,vector<vector<string>>&res,vector<string>&path)
    {
        if(ind==s.size())
        {
            res.push_back(path);
            return;
        }
        
        //we are running loop here as we can partition from multiple indexws to get the palidrome string
        for(int i=ind;i<s.size();i++)
        {
            if(ispalidrome(s,ind,i))
            {
                path.push_back(s.substr(ind,i-ind+1)); //to push partition string in path vector
                calpart(i+1,s,res,path); //calling recursion
                path.pop_back();
            }
        }
    }
    bool ispalidrome(string s,int start,int end)  ///to check partition string is palidrome or not
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return false;
            }
            
        }
        return true;
    }
};
