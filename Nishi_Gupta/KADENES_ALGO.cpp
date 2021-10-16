/*First, we will consider two elements, one which stores the maximum end of the subarray and another which stores the maximum sum so far. 
Let these two variables be max_ending_here and max_so_far, respectively. 
We will initialise both of them to 0. 
Each time we get a positive sum, we compare it with max_so_far and update max_so_far if it is greater than it.
Time complexity o(n)
*/
#include<iostream>
using namespace std;
int kadane(int arr[], int n)
{
	 
	int max_so_far = 0;
	int max_ending_here = 0;
	for (int i = 0; i < n; i++)
	{
    	max_ending_here = max_ending_here + arr[i];
    	if(max_ending_here < 0)
    	{
        	max_ending_here = 0;
    	}
     	
    	if(max_so_far < max_ending_here)
    	{
        	max_so_far = max_ending_here;    
    	}
    }
	return max_so_far;
    
}

int main()
{
 	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	cout << "Maximum sum contiguous subarray is "<<kadane(arr, n);
 	return 0;
}
