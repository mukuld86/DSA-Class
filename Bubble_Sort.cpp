// write a program to perform bubble sort on an array
#include<iostream>
using namespace std;

int main()
{
	int n,i,k,temp;
	cout<<"Enter no. of array elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(k=1;k<n;k++)
	{
		i=1;
		while(i<=n-k)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			i++;	
		}
	}
	cout<<"Sorted array is: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
