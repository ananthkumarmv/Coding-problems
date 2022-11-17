#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, prd, sum, x;
	while(t--){
		
		cin>>n;
		
		sum = prd = 0;
		for(int i=0; i<n; i++){
			cin>>x;
			
			sum += x;
			if(x == 0)
				prd++;
			
		}
		
		sum += prd;
		
		(sum != 0) ? cout<<prd<<"\n" : cout<<prd+1<<"\n";

	}

	return 0;
}
