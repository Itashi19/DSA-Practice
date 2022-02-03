/*
67. Permutation in String
Medium

4257

123

Add to List

Share
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

*/


vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int s1len = s1.size();
        int s2len = s2.size();
        if(s1len>s2len)
            return false;
        
        int left=0,right=0;
        while(right<s1len)
        {
        	//storing the frequencies of each character in a string.
            s1hash[s1[right]-'a'] +=1;
            s2hash[s2[right]-'a'] +=1;
            right +=1;
        }
        
        /*
        suppose
        s1=abc
        s2=dbabcounh;
        
        1)first loop
        right will point to b that is covering dbab
        so to make it point to the end of window we do right-=1
        
        */
        right -=1;  // to point right to the end of the window
        while(right<s2len)
        {
            if(s1hash==s2hash)
                return true;
            right+=1; //increement right to move to next ch in string dbab
            if(right!=s2len)
                s2hash[s2[right]-'a'] +=1;  //frequency of b new chractre
            s2hash[s2[left]-'a'] -=1;  //decreasing fr of prev first character from the hasgh 
            left +=1;  // increasing left to 1
        }
        return false;
