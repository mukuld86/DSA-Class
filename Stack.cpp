// write a program to perform the push operation on the stack
#include<iostream>
using namespace std;
int main(){
	int MAXSTK,x,top=-1;
	cout<<"Enter the MAXSTK value: ";
	cin>>MAXSTK;
	int stack[MAXSTK];
	cout<<"Enter the no. of elements to insert: ";
	cin>>x;
	if(x>MAXSTK){
		cout<<"No. of elements to insert exceeds the capacity of the stack!\n";
		return 1;
	}
	cout<<"Enter the elements: ";
	while(top<MAXSTK && top<x-1){
		top=top+1;
		cin>>stack[top];
	}
	cout<<"Elements in the Stack are: ";
	for(top;top>=0;top--){
		cout<<stack[top]<<" ";
	}
	cout<<endl;
	return 0;
}
