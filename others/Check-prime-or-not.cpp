#include<iostream>
using namespace std;
int main(){
	int n,f=0;
	cin>>n;
	if(n==1 || n==0) {
			cout<<"Not a prime number";
			goto q;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0) {
			cout<<"Not a prime number";
			f=1;
			break;
		}
		
	}
	if(f==0){
		cout<<"Prime number";
	}
	q:

	return 0;
}

