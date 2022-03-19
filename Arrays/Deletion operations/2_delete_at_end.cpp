// Deletion of element at end
// In this, we just need to change the value of last element with 0, then it automatically delete the element
// Time - O(1)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

int deleteAtEnd(int arr[], int n, int l)
{
    // Just change the value of last element
    arr[l-1] = 0;

    cout<<"\nAfter deletion at end: "<<endl;
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

    // Calling function with input array, its size and index of first empty block 
    deleteAtEnd(arr, 8, len);
    return 0;
}