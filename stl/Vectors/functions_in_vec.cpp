#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v{10, 20, 30, 40, 50};
	v.pop_back();						//removes last element
	
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
	
	//front() returns reference of first element
	v.front()=100;						//means a[0] = 100;
	cout<<"front() :"<<v.front()<<endl;				//prints 100
	
	
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
	
	//back() returns reference of last element
	v.back()=500;						//means a[n] = 500;
	cout<<"back() :"<<v.back()<<endl;
	
	
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
	
	
	return 0;
}

