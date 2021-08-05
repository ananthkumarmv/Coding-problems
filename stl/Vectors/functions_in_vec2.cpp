#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v{10, 20, 30, 40, 50};
	//v.begin() returns address of first element
	auto it = v.insert(v.begin(), 100);			//{100, 10, 20, 30, 40, 50}
	for(it; it!=v.end(); it++)
		cout<<(*it)<<" ";
	
	cout<<endl;
	
	//inserts at position 2
	v.insert(v.begin()+2, 300);					//{100, 10, 300, 20, 30, 40, 50}
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<(*it)<<" ";
		
	cout<<endl;
		
	//inserts twice 
	v.insert(v.begin(), 2,  5);					//{5, 5, 100, 10, 300, 20, 30, 40, 50}
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<(*it)<<" ";
		
	cout<<endl;
		
	
	
	vector<int> v2;
	
	//(address_of_v2, include, exclude)
	v2.insert(v2.begin(), v.begin(), v.begin()+2);
	
	for(int x: v)
		cout<<x<<" ";
		
	cout<<endl;
	
	for(int x: v2)
		cout<<x<<" ";

	return 0;
}

