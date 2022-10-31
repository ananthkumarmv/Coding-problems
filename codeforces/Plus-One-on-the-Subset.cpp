#include<iostream>
#include<climits>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	
	long long maxi;
	long long mini;
	long long x;
	while(t--){
		
		cin>>n;
		
		maxi = INT_MIN;
		mini = INT_MAX;
		
		while(n--){
			
			cin>>x;
			if(maxi < x)
				maxi = x;
				
			if(mini > x)
				mini = x;
			
		}
		
		cout<<(maxi-mini)<<"\n";
		
	}

	return 0;
}
