//438. Find All Anagrams in a String

Link:https://leetcode.com/problems/find-all-anagrams-in-a-string/


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        //here hash stores the frequency of the whole string characters 
        //a nd phash stores the frequency of the p string that is window the comparison of both the strings takes plavce
        vector<int>hash(26,0);
        vector<int>phash(26,0);
        int window=p.size();
        int len=s.size();
        
        int right=0,left=0;
        if(len<window)
        {
            return ans;
        }
        while(right<window)
        {
            phash[p[right]-'a']++;
            hash[s[right]-'a']++;
            right++;
        }
        right-=1;
        while(right<len)
        {
            if(phash==hash)
            
                ans.push_back(left);
            
            right+=1;
            if(right!=len)
              hash[s[right]-'a']++;  //counting freq of next character in the string.
            hash[s[left]-'a']-=1;  //removing the previous character from the tring
            left+=1;
            
            
        }
return ans;
    }
};
