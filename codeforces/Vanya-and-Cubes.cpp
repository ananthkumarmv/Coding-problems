#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int a=0, c=0;
	while(a<=n){
		c+=1;
		a = a + (c*(c+1))/2;
		
	}
	
	cout<<(c-1)<<" ";

	return 0;
}
