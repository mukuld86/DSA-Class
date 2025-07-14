#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="welcome";
	string str2="welldone";
	int x=str1.compare(str2);
	if(x==0)
	cout<<"string are same";
	else
	cout<<"strings are diferent";
	cout<<endl<<str1.compare(3,2,str2,5,2);
	return 0;
}
