#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int ps1, ps2, cs1=0, cs2=0, diff1=0, diff2=0;
	
	while(n--){
		
		cin>>ps1>>ps2;
		
		cs1 = cs1 + ps1;
		cs2 = cs2 + ps2;
		
		if(cs1>cs2){
			if((cs1-cs2)>diff1)
				diff1 = cs1 - cs2;
		}
			
		else{
			if((cs2-cs1)>diff2)
				diff2 = cs2 - cs1;

		}
		
	}
	
	if(diff1>diff2)
		cout<<"1 "<<diff1;
	else
		cout<<"2 "<<diff2;
		
	return 0;
}
