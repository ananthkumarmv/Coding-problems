#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int mini, maxi, x, cnt=0;
	
	int pmini, pmaxi;
	
	cin>>x;
	
	pmini = pmaxi = mini = maxi = x;
	
	for(int i=1; i<t; i++){
		
		cin>>x;
		
		mini = min(mini, x);
		maxi = max(maxi, x);
		
		if(pmini > mini){
			cnt++;
			pmini = mini;
		}
		
		if(pmaxi < maxi){
			cnt++;
			pmaxi = maxi;
		}
		
	}
	
	cout<<cnt<<"\n";

	return 0;
}
