#include<iostream>
#include<cmath>

using namespace std;

bool checkxpowy(int n){
	if(n<=1) return 1;
	
	float p;
	if(n<=1) return 1;
	
	for(int i=2; i<=sqrt(n);i++){
		p = log2(n)/log2(i);
		if((ceil(p)==floor(p)) && p>1) return true;
	}
	
	return false;
}


int main(){
	
	for(int i=2;i<10;i++){
		if(checkxpowy(i))
			cout<<i<<" ";
	}
	
	return 0;
}



