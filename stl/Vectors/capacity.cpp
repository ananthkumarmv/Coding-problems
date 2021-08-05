#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	cout<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.capacity()<<endl;
	v.push_back(2);
	cout<<v.capacity()<<endl;
	v.push_back(3);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.push_back(3);
	v.push_back(3);
	cout<<v.capacity()<<endl;

	return 0;
}

