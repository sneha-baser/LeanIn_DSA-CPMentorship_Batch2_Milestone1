#include<iostream>
using namespace std;

int findFloor( int arr[], int low,int high, int x) {
    
    
    if (low > high)
        return -1;
 
    
    if (x >= arr[high])
        return high;
 
    
    int mid = (low + high) / 2;
 
    
    if (arr[mid] == x)
        return mid;
 
    
    if (mid > 0 && arr[mid - 1] <= x
        && x < arr[mid])
        return mid - 1;
 
    
    if (x < arr[mid])
        return findFloor(
            arr, low, mid - 1, x);
 
    return findFloor(arr, mid + 1, high, x);
}
 // used binary search - time complexity- O(nlogn)

int main()
{
    int arr[]={1,2,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int x=8;
    int result=findFloor(arr,0,n-1,x);
    
    if(result==-1)
    {
        cout<<"do not exist"<<endl;
    }
    
    else
    {
        cout<<""<<arr[result];
    }
}


