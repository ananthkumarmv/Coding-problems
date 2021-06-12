#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n;
	cin>>n;
	int a[10]={0};
	while(n){
		a[n%10]++;
		n/=10;
	}
	int i,sk=0;
	for(i=0;i<10;i++){
		if(a[i]>1)
		sk++;
	}
	if(sk==0)
	    sk=-1;
	cout<<sk<<endl;
	
	return 0;
}

