#include <iostream>
#include<algorithm>
using namespace std;

void wavelikesort(int arr[],int n)
{
    sort(arr,arr+n);   // time complexity is O(nlogn)
    
    int i,j;
    
    for(i=0,j=1 ; i<n-1 && j<n ; i+=2,j+=2)
    {
        swap(arr[i],arr[j]);
    }
}





int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    wavelikesort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}