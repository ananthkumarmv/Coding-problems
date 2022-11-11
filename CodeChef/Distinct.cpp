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
		
		int a;
		int maxi = INT_MIN;
		
		while(n--){
			cin>>a;
			
			maxi = max(maxi, a);
		}
		
		cout<<maxi<<"\n";
	}

	return 0;
}
