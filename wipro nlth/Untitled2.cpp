#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int a[3];
	
	int thnum=9, hnum=0, tenum=9, unnum=0;
	
	int t, h, te, un;
	for(int i=0;i<3; i++) cin>>a[i];
	
	for(int i=0;i<3; i++){
		
		t= a[i]/1000;
		thnum =min(thnum , t);
		
		h= (a[i]/100)%10;
		hnum =max(hnum, h);
		
		te= (a[i]/10)%10;
		tenum =min(tenum , te);
		
		un= a[i]%10;
		unnum =max(unnum , un);
	}
	
	cout<<thnum<<hnum<<tenum<<unnum;
	
	return 0;
}

