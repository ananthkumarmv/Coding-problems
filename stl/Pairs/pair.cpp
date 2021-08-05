#include<iostream>
#include<utility>


using namespace std;

int main(){
	
	pair<int, int>p1(10, 20);
	cout<<p1.first<<" "<<p1.second<<endl;
	
	pair<int, string> p2=make_pair(100, "Anant");
	cout<<p2.first<<" "<<p2.second;

	return 0;
}

