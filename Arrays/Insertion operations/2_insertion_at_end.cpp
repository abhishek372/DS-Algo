// Insertion of element at end
// In this, we just insert element at first empty block of array
// Time - O(1)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

int insertAtEnd(int arr[], int n, int l)
{
    arr[l] = 20;

    cout<<"\nAfter insertion: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    // Initialized array with 0 of size 10
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
    insertAtEnd(arr, 8, len);
    return 0;
}