#include<iostream>
using namespace std;
int search(int arr[], int low,int high, int x)
{
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
        return search(arr, low, mid - 1, x);
    return search(arr, mid + 1, high, x);
}
int main()
{
    int arr[] = { 1, 2, 4, 6, 10, 12, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int index = search(arr, 0, n - 1, x);
    if (index == -1)
      cout<<"Float of "<<x<<" does not exist";
    else
        cout<<"Floor of "<<x<<" is "<<arr[index]; 
    return 0;
}

