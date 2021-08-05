#include<iostream>
#include<utility>

using namespace std;

int main(){
	
	pair<int, int>p1(1,12), p2(9, 12);
	cout<<(p1==p2)<<" "
		<<(p1!=p2)<<" "
		<<(p1>p2)<<" "		//compares first value
		<<(p1<p2)<<endl;	//compares first value
	return 0;
}

