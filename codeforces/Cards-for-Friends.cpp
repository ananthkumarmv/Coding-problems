#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int w, h, n;
		
		cin>>w>>h>>n;
		
		if(n==1){
			cout<<"YES\n";
			continue;
		}
		
		int ans = 1;
		while( w%2 == 0 && h%2 == 0 ){
			ans *= 4;
			w /=2;
			h /= 2;
		}
		
		while(w%2 == 0){
			ans *= 2;
			w /= 2;
		}
		
		while(h%2 == 0){
			ans *= 2;
			h /= 2;
		}
		
		if(ans>=n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
