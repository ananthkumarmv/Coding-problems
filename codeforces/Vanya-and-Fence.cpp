#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, h;
	cin>>n>>h;
	
	int a;
	int w = 0;
	for(int i=0; i<n; i++){
		
		cin>>a;
		if(a > h)
			w += 2;
		
		else
			w += 1;
		
	}
	
	cout<<w<<"\n";

	return 0;
}
