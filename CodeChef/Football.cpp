#include<iostream>
#include<climits>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		int a[n], b[n];
		
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		for(int i=0; i<n; i++)
			cin>>b[i];
		
		int maxscr = INT_MIN;
		
		for(int i=0; i<n; i++){
			
			if( (a[i]*20 - b[i]*10) > maxscr)
				maxscr = a[i]*20 - b[i]*10;
			
		}
		
		if(maxscr<0)
			maxscr = 0;
		
		cout<<maxscr<<"\n";
		
	}

	return 0;
}
