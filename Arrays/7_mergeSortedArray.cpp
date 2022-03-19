// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
// representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.The final sorted array should not be 
// returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length 
// of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 
// and should be ignored. nums2 has a length of n.

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]


// Time taken - O(N) 
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{        
    m--;
    n--;
    for(int i=nums1.size()-1; i>=0; i--){
        
        // If size of nums2 is 0, just return
        if(n<0){
           return;
        }
        if(m>=0 && nums1[m] > nums2[n]){
            nums1[i] = nums1[m];
            m--;
        }
        else{
            nums1[i] = nums2[n];
            n--;
        }
    }
}
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    merge(nums1, 3, nums2, 3);
    return 0;
}
