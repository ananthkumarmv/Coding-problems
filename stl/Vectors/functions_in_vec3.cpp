#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v {0, 1, 2, 3, 4};
	v.erase(v.begin());
	for(int x: v)
		cout<<x<<" ";		//1,2,3,4
	cout<<endl;
	
	v.erase(v.begin(), v.end()-1);
	for(int x : v)
		cout<<x<<" ";		//5
	

	return 0;
}

