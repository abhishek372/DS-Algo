// Deletion at the beginning of the array
// To delete at first, just left shift the elements from 2nd index to first 
// Time - O(N)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

void deleteAtFirst(int arr[], int n)
{
    // Right shift the array elements by one index
    for(int i=1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }

    cout<<"\nAfter deletion at first: "<<endl;
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

    // Calling function with input array and size of 8
    deleteAtFirst(arr, 8);
    return 0;
}