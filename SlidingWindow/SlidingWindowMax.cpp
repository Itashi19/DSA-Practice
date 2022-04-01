/*

liding Window Maximum
Medium

245

2

Add to favorites
Asked In:
GOOGLE
CHRONUS
WALMART LABS
AMAZON
Given an array of integers A.  There is a sliding window of size B which 

is moving from the very left of the array to the very right. 

You can only see the w numbers in the window. Each time the sliding window moves 

rightwards by one position. You have to find the maximum for each window. 

The following example will give you more clarity.

The array A is [1 3 -1 -3 5 3 6 7], and B is 3.

Window position	Max
———————————-	————————-
[1  3  -1] -3  5  3  6  7	3
1 [3  -1  -3] 5  3  6  7	3
1  3 [-1  -3  5] 3  6  7	5
1  3  -1 [-3  5  3] 6  7	5
1  3  -1  -3 [5  3  6] 7	6
1  3  -1  -3  5 [3  6  7]	7
Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].

Note: If B > length of the array, return 1 element with the max of the array.

*/



vector<int> Solution::slidingMaximum(const vector<int> &nums, int k) {
vector<int> output;
        int i=0;
        int j=0;
        deque<int> l;
        while(j<nums.size())
        {
            if(l.empty()){ 
                l.push_back(nums[j]);   
            }
            else
            {
                while(!l.empty() && l.back()<nums[j])
                    l.pop_back();
                l.push_back(nums[j]);               
            }
            if(j-i+1<k)
                ++j;
            else if(j-i+1==k)
            {
                output.push_back(l.front());
                if(nums[i]==l.front())
                    l.pop_front();
                ++i;
                ++j;
            }
        }
        return output;
}
