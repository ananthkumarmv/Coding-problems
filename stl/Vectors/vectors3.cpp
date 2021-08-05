#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int arr[]={1, 2, 3};
	int n= sizeof(arr)/sizeof(arr[0]);
	vector<int> v(arr, arr+n);
	
	for(auto it = v.rbegin(); it!= v.rend(); it++)
		cout<<(*it)<<" ";

	return 0;
}

