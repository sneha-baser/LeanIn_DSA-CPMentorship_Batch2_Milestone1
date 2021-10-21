class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long cursum = arr[0];
        long maxsofar = arr[0];
        for(int i=1; i<n; i++){
            cursum  = Math.max(arr[i], cursum + arr[i]);
            maxsofar = Math.max(cursum, maxsofar);
        }
        return maxsofar;
    }
    
}
