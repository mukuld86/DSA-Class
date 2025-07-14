// write a program to perform binary search on an array
#include<iostream>
using namespace std;

int main()
{
	int n,i,index,element;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements in sorted order: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	cout<<"Enter element to search: ";
	cin>>element;
	int beg=0,end=n-1,mid=(int)(beg+end)/2;
	while(beg<=end && arr[mid]!=element)
	{
		if(element<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(int)(beg+end)/2;
	}
	if(arr[mid]==element)
	{
		index=mid;
	}
	else
	{
		index=NULL;
		cout<<"Element not present!";
		exit(0);
	}
	cout<<"Element is present at index "<<index;
	return 0;
}
