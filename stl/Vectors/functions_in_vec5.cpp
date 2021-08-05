#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v{0, 1, 2, 3, 4};
	v.resize(3);
	for(int x: v)
		cout<<x<<" ";		//0, 1, 2
	cout<<endl;
	
	
	v.resize(5);
	for(int x: v)
		cout<<x<<" ";		//0, 1, 2, 0, 0
	cout<<endl;
	
	
	v.resize(8, 100);
	for(int x: v)
		cout<<x<<" ";		//0, 1, 2, 0, 0, 100, 100, 100
	cout<<endl;
	

	return 0;
}

