#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

int main() {
	vector<int> v={10, 20, 30, 40, 50};
	auto i = v.begin(); 
	i=next(i);
	cout<<(*i)<<" ";		//20
	
	i=next(i, 2);			
	cout<<(*i)<<" ";		//40
	
	i = prev(i,2);			
	cout<<(*i)<<" ";		//30
    
    advance(i, 3);
    cout<<(*i)<<" ";
    return 0;
}


