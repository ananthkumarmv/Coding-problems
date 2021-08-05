#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int n=3, x=10;
	vector<int> v(n, x);
	
	//we can replace vector<int>::iterator by auto
	for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){		//iterator gives an address of a vector element	
		cout<<(*it)<<" ";
	}
	
	
	return 0;
}

