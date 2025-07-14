#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
int main(){
	int size, element;
	vector<int> vec1;
	cout<<"enter the size of vector: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>element;
		vec1.push_back(element);
	}
	vec1.pop_back();
	display(vec1);
	return 0;
}
