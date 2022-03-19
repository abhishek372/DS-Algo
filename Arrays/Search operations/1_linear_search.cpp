// Search an element using linear search
// It is also called sequential search, where each element is compared with key element.
// Time - O(N)
// Space - O(1)

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int key)
{
    // Loop check each element and return the index, if found, else return -1
    for(int i=0; i<n; i++)
    {
        // Key element found and return its index
        if(a[i]==key){
            return i;
        }
    }
    // If not found, return -1
    return -1;
}
int main()
{
    // Given array
    int arr[] = {3, 5, 2, 8, 11, 9};
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


    // Return the index of element if found, otherwise return -1 and store it in result.
    result = linearSearch(arr, size, key);
    
    // Check whether element found or not
    if(result==-1){
        cout<<"Element not found!!"<<endl;
    }
    else{
        cout<<"Element found at index "<<result<< "."<<endl;
    }
    return 0;
}