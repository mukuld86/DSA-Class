#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="bcme";
	string s2="abcrome";
	cout<<s1.compare(s2)<<endl;
	cout<<s1.compare(2,2,s2,5,2);
	return 0;
	
}
