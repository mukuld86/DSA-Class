// Stack
#include<iostream>
using namespace std;
const int MAXSIZE=100;
int main(){
	int stack[MAXSIZE];
	int i,item,data,TOP=-1;
	while(true){
		cout<<"\nPress 1 for PUSH\nPress 2 for POP\nPress 3 for PEEK\nPress 4 for Print Data of the Stack\nPress 9 for Exit\t";
		cin>>item;		
		switch(item){
			case 1:
				if(TOP==MAXSIZE-1){
					cout<<"Overflow\n";
					exit(0);
				}
				cout<<"Enter value: ";
				cin>>data;
				TOP=TOP+1;
				stack[TOP]=data;
				break;
			case 2:
				if(TOP==-1){
					cout<<"UnderFlow\n";
					exit(0);
				}
				TOP=TOP-1;
				break;
			case 3:
				if(TOP==-1){
					cout<<"UnderFlow\n";
					exit(0);
					break;
				}
				cout<<stack[TOP]<<endl;
				break;
			case 4:
				if(TOP==-1){
					cout<<"UnderFlow\n";
					exit(0);
					break;
				}
				for(i=TOP;i>=0;i--){
				
				cout<<stack[i]<<" ";
				}
				cout<<endl;
				break;
			case 9:
				exit(0);
				break;
		}
	}
	return 0;
}
