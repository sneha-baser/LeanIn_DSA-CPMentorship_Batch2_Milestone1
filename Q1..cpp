//q1.Wave Array
#include<iostream>
#include<algorithm>
using namespace std;

void Wavearray(int arr[],int n)
{
    int i = 0;
    while (i<=n-2)
    {
    	//swap the adjacent elements by increasing the count by 2
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
          i += 2;
    }
};
int main()
{
   int arr[]={10,15,20,25,30};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "The size of the array is: " << n<<endl;
   Wavearray(arr,n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
   return 0;
} 
