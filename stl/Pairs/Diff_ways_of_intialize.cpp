#include<iostream>
#include<utility>

using namespace std;

int main(){
	pair<int, int> p1;		//default
	pair<int, char> p2;
	p2 = {1, 'a'};	//initialized,  different data type
	pair<int, int> p3(1, 10);		//initialized,  same data type
	pair<int, int> p4(p3);		//copy of g3
	pair<int, int> p5;
	
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;
	cout<<p4.first<<" "<<p4.second<<endl;
	cout<<p5.first<<" "<<p5.second<<endl;

	return 0;
}

