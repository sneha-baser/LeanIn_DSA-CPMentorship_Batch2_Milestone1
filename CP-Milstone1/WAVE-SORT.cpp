#include<iostream>
using namespace std;
void swap(int arr[],int i, int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void wavesort(int arr[],int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(arr[i]>arr[i-1])
		{
			swap(arr,i,i-1);
		}
		if(arr[i]>arr[i+1] && i<=n-2)
		{
			swap(arr,i,i+1);
		}
	}
}
int main()
{
	int i,n,arr[i];
	cout<<"Enter no of elements in array:";
	cin>>n;
	printf("enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
wavesort(arr,n);
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
