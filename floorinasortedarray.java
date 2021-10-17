class Solution{
    
    // Function to find floor of x
    // arr: input array
    // n is the size of array
    static int findFloor(long arr[], int n, long x)
    {
             int low= 0, high = n-1;
        int ans   = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(arr[mid]==x)
                return mid;
            if(arr[mid]>x)
                high = mid-1;
            else
            {
                low = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
    
}
