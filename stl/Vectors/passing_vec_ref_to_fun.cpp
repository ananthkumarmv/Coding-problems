#include<iostream>
#include<vector>

using namespace std;

void fun(vector<int> &v){
	v.push_back(5);
	v.push_back(6);
}

int main(){
	vector<int> v{0, 1, 2, 3, 4};
	fun(v);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";

	return 0;
}

