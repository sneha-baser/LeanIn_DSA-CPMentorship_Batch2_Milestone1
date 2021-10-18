#include <stdio.h>
 
int floorSearch(int arr[], int n, int x)
{
    // If last element is smaller than x
    if (x >= arr[n - 1])
        return n - 1;
 
    // If first element is greater than x
    if (x < arr[0])
        return -1;
 
    // Linearly search for the first element
    // greater than x
    for (int i = 1; i < n; i++)
        if (arr[i] > x)
            return (i - 1);
 
    return -1;
}
/* Driver program to check above functions */
int main()
{
    int arr[] = { 1, 2, 4, 6, 10, 12, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int index = floorSearch(arr, n - 1, x);
    if (index == -1)
        printf("Floor of %d doesn't exist in array ", x);
    else
        printf("Floor of %d is %d", x, arr[index]);
    return 0;
}
/*Floor of 7 is 6*/
