#include<iostream>
using namespace std;
int main(){
	int n, flag;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i==1 || i==0) continue;
		flag=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
			    flag=0;
			    break;
		}
		}
		if(flag==1) cout<<i<<" ";
	}

	return 0;
}


