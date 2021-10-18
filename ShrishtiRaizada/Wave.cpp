// Shrihti Raizada
// CP Basic
// Milestone 1 Q1

// Wave array program
#include<iostream>

using namespace std;
int len,arr[10];
// Function to swap numbers 

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
    *}
// This function sorts the array in wave form 

void sortWave(int arr[], int len)
{

    // Traverse all even elements
    for (int i = 0; i < len; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && arr[i-1] > arr[i] )
            swap(&arr[i], &arr[i-1]);

        // If current even element is smaller than next
        if (i<len-1 && arr[i] < arr[i+1] )
            swap(&arr[i], &arr[i + 1]);
    }
    }
// Main to take user input 

int main()
{

    cout << "Enter the size of the array : ";
        cin >> len;
            cout << "\nEnter the number elements of the array : ";
                for (int i = 0; i < len; i++)
                    cin >> arr[i];
    sortWave(arr, len);
    for (int i=0; i<len; i++)
       cout << arr[i] << " ";
    return 0;
    }