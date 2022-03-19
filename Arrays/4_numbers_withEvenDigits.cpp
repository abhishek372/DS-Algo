// Given an array nums of integers, return how many of them contain an even number of digits.
// Input: nums = [12,345,2,6,7896]
// Output: 2

// Time taken - O(N)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums)
{
    int count = 0, even_digits = 0;
    for(int i=0; i<nums.size(); i++)
    {
        int num = nums[i];
        count = 0;
       
        // loop to count the digits of each number
        while(num!=0){
            num = num/10;
            count++;
        }
        // check the count which is divisible by 2 or not
        if(count%2 == 0){
            even_digits++;
        }
    }
    return even_digits;
}
int main()
{
    // Initialized vector 
    vector<int> nums = {1, 2, 60, 786, 45, 9812, 9};

    int res;
    
    // store the returned value in result
    res = findNumbers(nums);

    cout<<"Total numbers with even digits is: "<<res;
    return 0;
}