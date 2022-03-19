// Recursive approach of binary search
// Time - O(logn)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

// Recursive binary search function. It returns
// location of x in given array if present, else return -1
int binarySearch(int a[], int low, int high, int key)
{   
    while(low<=high)
    {
        int mid = low + (high-low) / 2;

        // if element found at middle
        if(a[mid] == key){
            return mid;
        }
        // if element is less than mid element, call the function again with left part of array
        else if(a[mid]>key){
            return binarySearch(a, 0, mid-1, key);
        }
        // if element is greater than mid element, call the function again with right part of array
        else{
            return binarySearch(a, mid+1, high, key);
        }
    }
    
    // If element not found, return -1
    return -1;
}


int main()
{
    // Given sorted array
    int arr[] = {2, 3, 5, 7, 9, 12};
    int size, result;
    int key;

    // Size of array
    size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }    

    cout<<"\nEnter key element: ";
    cin>>key;   // Input search element

    // Store the return value of function in result
    result = binarySearch(arr, 0, size-1, key);

    // Check whether element found or not
    if(result==-1){
        cout<<"Element not found!!"<<endl;
    }
    else{
        cout<<"Element found at index "<<result<< "."<<endl;
    }

    return 0;
}