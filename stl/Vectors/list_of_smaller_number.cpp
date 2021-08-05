#include<iostream>
#include<vector>

using namespace std;

vector<int> smaller(vector<int> v, int k){
	vector<int> res;
	for(int &x: v){
		if(x<=k) res.push_back(x);
	}
	return res;
}

int main(){
	vector<int> v{10,23,55,32,56,78,23,45,43};
	int n;
	cin>>n;
	cout<<"Elements are: ";
	for(int &x: v)
		cout<<x<<" ";
	cout<<endl;
	
	vector<int> res = smaller(v, 40);
	for(int &x: res)
		cout<<x<<" ";

	return 0;
}

