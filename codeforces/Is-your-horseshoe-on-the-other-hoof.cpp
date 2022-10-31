#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long arr[4];
	
	int c = 0;
	
	for(int i=0; i<4; i++)
		cin>>arr[i];
	
	sort(arr, arr+4);
	for(int i=0; i<3; i++)
		if(arr[i] == arr[i+1])
			c++;
			
	cout<<c<<"\n";

	return 0;
}
