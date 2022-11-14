#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	
	cin>>n;
	
	int arr[n];
	
	int x;
	int max1 = 0, max2 = 0;
	while(n--){
		cin>>x;
		if(x>max1)
			max1 = x;
	}
	
	cin>>m;
	
	while(m--){
		cin>>x;
		if(x>max2)
			max2 = x;
	}
	
	cout<<max1<<" "<<max2;

	return 0;
}
