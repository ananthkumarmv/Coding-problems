#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v{0, 1, 2, 3, 4};
	v.clear();
	cout<<v.size()<<" ";
	if(v.empty()==true)
		cout<<"Empty";
	else
		cout<<"Not Empty";

	return 0;
}

