#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

template <class T>
T maxof(const T &a, const T &b){
	return (a>b?a:b);
}

template <class T>
void print(const vector<T>& v){
	if(v.empty()) return;
	for(const T &i:v) cout<<i<<" ";
	cout<<endl;
}


int main(){
	int a=9,b=7;
	cout<<maxof<int>(a,b)<<endl;
	vector<string> v1={"one","two","three"};
	print(v1);
	return 0;
}



