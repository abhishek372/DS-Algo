// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.
// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]

// Time taken - O(N^2)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr) 
{
    int n = arr.size() - 1;

    // Loop through each element to find 0 and duplicate it
    for(int i=0; i<n; i++)
    {
        // if 0 found at an index then, shift the next index element by 1
        if(arr[i]==0)
        {
            for(int j=n-1; j>i; j--)
            {
                arr[j+1] = arr[j];
            }
            // Assign (i+1)th element be 0
            arr[i+1] = 0;
            i++;
        }
    }

    // Print the array after duplicating
    for(auto x: arr){
        cout<<x<<", ";
    }
}
int main()
{
    // Initialized vector 
    vector<int> arr = {1,0,2,3,0,4,5,0};
    
    // Call the function
    duplicateZeros(arr);

    return 0;
}