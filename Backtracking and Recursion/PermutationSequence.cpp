/*
The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

 

Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"


*/
//we divided by k/fact again and again to get value at the particular pos in string

class Solution {
public:
    string getPermutation(int n, int k) {
       vector<int>numbers;
        int fact=1;
        for(int i=1;i<n;i++)
        {
            fact=fact*i;  //calculating factorial
            numbers.push_back(i);  //pushing value if n=3  1,2
            
        }
        numbers.push_back(n); // this will put 3
        k=k-1;
        string ans="";
        while(true)
        {
            ans+=to_string(numbers[k/fact]);  //from observation we got to know at every step number [i] that provides us ans
            numbers.erase(numbers.begin() +k/fact);  //we need to erase taht value from actual vector
            if(numbers.size()==0)
                break;
        
        k=k%fact;
        fact=fact/numbers.size();}   //updating k and fact
        return ans;
        
    }
};
