// Find first and last occurence of element in Sorted Array
// Time - O(logn)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

// First and last occurence
int firstAndLast(int arr[], int n, int key, bool searchFirst)
{
    int start=0, end=n-1, mid;
    int res = -1;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        // If element found ,search begins in left half
        if (arr[mid]==key){
            res = mid;

            // If element found ,search again in left half
            if(searchFirst){
                end = mid-1;
            }
            // If element found ,search again in right half
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

    int first = firstAndLast(arr, size, key, true);
    int last = firstAndLast(arr, size, key, false);

    if(first != -1){
        cout <<"First Occurrence at index = "<<first<<endl;
        cout <<"Last Occurrence at index = "<<last;
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}











// Last occurence
// int last(int arr[], int n, int key)
// {
//     int start=0, end=n-1, mid;
//     int res = -1;

//     while(start<=end)
//     {
//         mid = start + (end-start)/2;

//         // If element found ,search begins in right half
//         if (arr[mid]==key){
//             res = mid;
//             start = mid+1;
//         }
//         else if(arr[mid]>key){
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     return res;
// }