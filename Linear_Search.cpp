// write a program to perform linear search on the array

#include<iostream>
using namespace std;

int main()
{
	int n,i,element,index;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	cout<<"Enter element to search: ";
	cin>>element;
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			index=i;
			cout<<"Element is present at index "<<index<<endl;
			exit(0);
		}
	}
	cout<<"Element not present!";
	
	return 0;
}
