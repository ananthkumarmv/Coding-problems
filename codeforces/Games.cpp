#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int h[n], a[n];
	
	int cnt = 0; 
	for(int i=0; i<n; i++){
		cin>>h[i]>>a[i];
		
		for(int j=0; j<i; j++){
			if(h[i] == a[j])
				cnt++;
				
			if(a[i] == h[j])
				cnt++;
		}
	}
	
	cout<<cnt<<"\n";

	return 0;
}
