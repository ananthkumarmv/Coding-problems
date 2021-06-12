#include<iostream>
using namespace std;
int main(){
	int n,esum=0,osum=0;
	cin>>n;
	while(n){
		int k=n%10;
		if(k%2==0) esum+=k;
		else osum+=k;
		n/=10;
	}
	if(esum==0) esum=1;
	if(osum==0) osum=1;
	cout<<esum*osum;

	return 0;
}

