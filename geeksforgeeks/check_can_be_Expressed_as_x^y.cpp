#include<iostream>
#include<cmath>

using namespace std;

bool isPower(unsigned n){
	if(n<=1) return true;
	
	for(int x=2; x<=sqrt(n);x++){
		unsigned p=x;
		
		while(p<=n){
			p*=x;
			if(p==n)
				return true;
		}
	}
	return false;
}




int main(){
	
	for(int i=2; i<100; i++)
		if(isPower(i))
			cout<<i<<" ";

	return 0;
}

