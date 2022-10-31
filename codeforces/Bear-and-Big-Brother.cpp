#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k, n, w;
	cin>>k>>n>>w;
	
	int t = ((w*(w+1))/2);
	
	int sum = k*t;
	
	if(n>=sum)
		cout<<0<<"\n";
	else
		cout<<(sum-n)<<"\n";
		
	return 0;
}
