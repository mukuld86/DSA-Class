#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="arlcome";
	string s2="wearomea";
	cout<<s1.find("lc")<<endl;
	cout<<s2.rfind("ea")<<endl;
	cout<<s2.find_last_of('e');
	return 0;
}
