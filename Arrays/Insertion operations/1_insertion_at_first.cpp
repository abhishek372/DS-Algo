// Insertion at the beginning of the array
// To insert at first, we have to shift the array elements by 1 index to create space for new element.
// Time - O(N)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

void insertAtFirst(int arr[], int n, int l)
{
    // Shift the array elements
    for(int i=l; i>0; i--)
    {
        arr[i] = arr[i-1];
    }

    // Insert at first
    arr[0] = 20;

    cout<<"\nAfter insertion: "<<endl;
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

    // Input array element upto size 5
    cout<<"Enter array elements of size 6 "<<endl;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        len++;
    }

    cout<<"Before insertion: "<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Calling function with size of 10 and index of first empty block 
    insertAtFirst(arr, 8, len);
    return 0;
}
