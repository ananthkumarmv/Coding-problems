#include<iostream>


using namespace std;

int main(){
	int n,p;
	cin>>n>>p;
	float ans=0;
	float inc = 1.0;
	
	for(int times=0;times<=p; times++){
		
		// Finalise the correct digit for the current place
		while(ans*ans<=n){
			ans=ans+inc;
		}
		ans-=inc;
		
		// Updates the increment for the next position
		inc/=10;
		
	}
	
	cout<<ans<<endl;

	return 0;
}

