// Print alternate elements of array

#include<iostream>
using namespace std;

void alternateElements(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;             // Input array size

    int arr[n];

    //Input array
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // Calling function
    alternateElements(arr, n);
    return 0;
}
