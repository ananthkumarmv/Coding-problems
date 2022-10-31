#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long n, x, s, r, hr;
	while(t--){
		
		cin>>n>>x;
		
		hr  = 0; 
		while(n--){
			
			cin>>s>>r;
			
			if(s<=x)
				hr = max(hr, r);
			
		}
		
		cout<<hr<<"\n";
		
	}

	return 0;
}
