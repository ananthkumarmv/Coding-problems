#include<iostream>
#include<utility>

using namespace std;

int main() {
	
	pair<int, int> a;
	pair<int, int> b;
	
	a = make_pair(10, 20);
	
	b = make_pair(15.5, 'B');
	
	cout<<"a: "<<a.first<<", "<<a.second<<endl;
	cout<<"b: "<<b.first<<", "<<b.second<<endl;
    
    return 0;
}


