KADANE'S ALGO
  
Time complexity= O(n)
  
  
  
//{ Diver code starts
import java.io.*;
class Main {
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
		while(t-->0){
		    //size of array
		    int n = Integer.parseInt(br.readLine().trim());
		    int arr[] = new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    
		    //adding elements
		    for(int i=0; i<n; i++){
		        arr[i] = Integer.parseInt(inputLine[i]);
		    }
		    
		    Solution obj = new Solution();
		    
		    //calling maxSubarraySum() function
		    System.out.println(obj.maxSubarraySum(arr, n));
		}
	}
}

// } Driver Code Ends


class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n)
    {
        long cursum= arr[0];
        long maxsum= arr[0];
        for(int i=1;i<n;i++)
        {                         //This code will also work when all the elements in array are negative.
           
           cursum=Math.max( arr[i],arr[i]+cursum);
           
            if(cursum>maxsum)
            maxsum=cursum;
        }
       return maxsum; 
    }
    
}

