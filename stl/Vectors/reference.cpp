#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(5);
	v.push_back(20);
	
	for(int x: v)						//doesn't change the vector
		x=6;							
		
	for(int i=0;i<v.size(); i++){
		cout<<v.at(i)<<" ";				//v.at(i) shows an out of bound exception
	}
	cout<<endl;
	
	for(int &x: v)
		x=6;
	
	for(int i=0;i<v.size(); i++){
		cout<<v.at(i)<<" ";				//v.at(i) shows an out of bound exception
	}

	return 0;
}

