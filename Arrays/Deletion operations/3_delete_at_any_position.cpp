// Deletion at any given position
// It is also very costly as we need to shift the elemet right by one index from given position
// Time - O(N)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

int deleteAtIndex(int arr[], int idx, int n, int l)
{
    for(int i=l; i>idx; i--)
    {
        arr[i] = arr[i-1];
    }

    // Assign the given index with 0 
    arr[idx] = 0;

    cout<<"\nAfter deletion at index "<<idx<<": "<<endl; 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    // Initialized array with 0 of size 8
    int arr[8] = {0};
    int len = 0;

    // Input array element upto size 6
    cout<<"Enter array elements of size 6 "<<endl;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        len++;
    }

    cout<<"Before deletion: "<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Calling function with input array, given index, its size and index of first empty block 
    deleteAtIndex(arr, 2, 8, len);
    return 0;
}



