#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, m, x, tot;
	while(t--){
		
		cin>>n>>m;
		
		int arr[101] = {0};
	
		for(int i=0; i<n; i++){
			cin>>x;
			arr[x] = 1;
		}
		
		tot = 0;
		for(int i=0; i<m; i++){
			cin>>x;
			tot += arr[x];
		}
		
		cout<<tot<<"\n";
			
	}
	
	return 0;
}
