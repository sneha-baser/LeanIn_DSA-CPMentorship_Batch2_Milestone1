#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max = INT_MIN, pos= 0;
 
    for (int i = 0; i < size; i++)          //time complexity - O(n)
    {
        pos = pos + a[i];
        if (max < pos)
            max = pos;
 
        if (pos < 0)
            pos = 0;
    }
    return max;
}
 

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}