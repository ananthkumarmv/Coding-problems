#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll x,y,t;
	cin>>x>>y;
	if(x>y){
		t=x;
		x=y;
		y=t;
	}
	ll i,maxp,minp;
	while(true)
	{
		if(x<0)
		t=-x;
		else t=x;
		for( i=2;i<=t/2;i++){
			if(t%i==0) break;
		}
		if(i>t/2){
			minp=x;
			break;
		}
		x++;
	}
	while(true)
	{
		if(y<0)
		t=-y;
		else t=y;
		for( i=2;i<=t/2;i++){
			if(t%i==0) break;
		}
		if(i>t/2){
			maxp=y;
			break;
		}
		y--;
	}
	int k=maxp+minp;
	if(k<0) k=-k;
	cout<<k;
	return 0;
}


