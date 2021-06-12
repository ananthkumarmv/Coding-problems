#include<iostream>
using namespace std;
int main(){
	int n,k,c=0,f=1;
	cin>>n;
	for(int i=1;i<=n;i++) f*=i;
	while(f){
		if((f%10)==0) c++;
		f/=10;
	}
	cout<<c;

	return 0;
}

