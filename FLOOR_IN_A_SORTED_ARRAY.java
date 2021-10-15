FLOOR IN A SORTED ARRAY

 Time complexity- 0(logn)



import java.util.*;
import java.lang.*;
import java.io.*;

class Searching
{
    public static void main (String[] args)throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
           String a[] = read.readLine().trim().split("\\s+");
           int n = Integer.parseInt(a[0]);
           long x = Long.parseLong(a[(int)1]);
           String st[] = read.readLine().trim().split("\\s+");
        
           long arr[] = new long[n];
           for(int i = 0; i < n; i++)
           {
               arr[i] = Long.parseLong(st[i]);
           }
           
           System.out.println(new Solution().findFloor(arr, n, x));
          
        }
    }
    
}// } Driver Code Ends


class Solution{
    
    // Function to find floor of x
    // arr: input array
    // n is the size of array
    static int findFloor(long arr[], int n, long x)//we will use binary search for better time complexity
    {
        int lb=0;
        int ub=n-1;
        int mid=0;
        if (x >= arr[n - 1])
            return n - 1;
          if (x < arr[0])
            return -1;
        while(ub>lb)
        {
           mid= (lb+ub)/2;
            if(x==arr[mid])
            return mid;
            
           if( mid > 0 && arr[mid - 1] <= x && x < arr[mid])
            return mid - 1;

            
            else if(x>arr[mid])
            {
                lb=mid+1;
             }
             else{
                 ub=mid-1;
             }
        }
       
            return -1;
        }
    
}
