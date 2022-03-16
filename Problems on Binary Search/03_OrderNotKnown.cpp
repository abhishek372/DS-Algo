// Binary Search on arry whose order not known
// Time - O(logn)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

int OrderNotKnown(int arr[], int n, int key)
{
    int start=0, end=n-1, mid;

    if(arr[0] < arr[1])
    {
        cout<<"hello";
        while(start<=end)
        {
            mid = start + (end-start)/2;

            if (arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    else 
    {   
        while(start<=end)
        {
            mid = start + (end-start)/2;

            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    cout<<"Search using Binary Search"<<endl;
    
    int size, res;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    res = OrderNotKnown(arr, size, key);

    if(res!=-1){
        cout<<"Element found at index "<<res;
    }
    else if(res==-1){
        cout<<"Element not found.";
    }

    return 0;
}