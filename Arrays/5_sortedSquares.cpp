// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]

// Time taken - O(N + NlogN)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums)
{
    // Square the each numbers
    for(int i=0; i<nums.size(); i++){
        nums[i] = pow(nums[i], 2);
    }

    // Sort the vector
    sort(nums.begin(), nums.end());

    return nums;
}
int main()
{
    // Initialized vector 
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> res;
    
    res = sortedSquares(nums);

    // Print the resultant vector
    for(auto x: res){
        cout<<x<<", ";
    }

    return 0;
}