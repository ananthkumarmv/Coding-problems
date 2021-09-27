#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int a[3];
	
	int num=9;
	for(int i=0;i<3; i++) cin>>a[i];
	
	for(int i=0;i<3; i++){
		int h= a[i]/1000;
		num =min(num , h);
	}
	
	cout<<num;
	
	num=0;
	
	for(int i=0;i<3; i++){
		int k= (a[i]/100)%10;
		num =max(num, k);
		
	}
	cout<<num;
	
	num=9;
	
	for(int i=0;i<3; i++){
		int l= (a[i]/10)%10;
		num =min(num , l);
	}
	
	cout<<num;
	
	num =0;
	for(int i=0;i<3; i++){
		int l= a[i]%10;
		num =max(num , l);
	}
	
	cout<<num;
	
	return 0;
}

