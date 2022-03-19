//  Problem - Given a binary array nums, return the maximum number of consecutive 1's in the array.
// Input: nums = [1,1,0,1,1,1]
// Output: 3

// Time taken - O(N)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int count = 0;
    int max_count = 0;

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] == 1){
            count ++;
            if(count > max_count){
                max_count = count;
            }
        }
        else{
            count = 0;
        }
    }
    return max_count;
}
int main()
{
    // Initialized vector 
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0};

    int res;
    
    // store the returned value in result
    res = findMaxConsecutiveOnes(nums);

    cout<<"Maximum count of 1's is: "<<res;
    return 0;
}