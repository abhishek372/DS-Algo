// Count of an element in Sorted Array
// Time - O(logn)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

// If `searchFirst` is true, return the first occurrence of the number; otherwise, return its last occurrence.
int binarySearch(int arr[], int n, int key, bool searchFirst)
{
    int start = 0, end = n-1, mid;
    int res = -1;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        if (arr[mid]==key){
            res = mid;
            
            // go on searching towards the left 
            if(searchFirst){
                end = mid-1;
            }
            // go on searching towards the right 
            else{
                start = mid+1;
            }
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int main()
{
    cout<<"Search using Binary Search"<<endl;
    
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    // first index - pass true
    int first = binarySearch(arr, size, key, true);

    // last index - pass false
    int last = binarySearch(arr, size, key, false);

    // total count of elements
    int count = last - first + 1;

    if(first == -1){
        cout<<"Count of "<<key<<" is 0.";
    }
    else{
        cout<<"Count of "<<key<<" is "<<count;
    }
    return 0;
}

