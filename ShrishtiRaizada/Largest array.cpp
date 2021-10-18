// C++ program to print largest contiguous array sum

//Shrishti Raizada
//CP Basic
// Milestone 1 Q2

// Largest sub array code

#include<iostream>
#include<climits>
using namespace std;

int n,arr[10];

//Kadane Algorithm
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

// Main
int main()
{
//User input of the array

        cout << "Enter the size of the array : ";
        cin >> n;
            cout << "\nEnter the elements of the array : ";
                for (int i = 0; i < n; i++)
                    cin >> a[i];
    
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
