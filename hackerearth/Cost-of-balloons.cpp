#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int g,p,n,s1=0,s2=0;
		cin>>g>>p;
		cin>>n;
		int a1[n], a2[n];
		for(int i=0;i<n;i++){
			cin>>a1[i];
			cin>>a2[i];
		}
		for(int i=0;i<n;i++){
			s1+=a1[i];
			s2+=a2[i];
		}
		int r = min(s1*g+s2*p,s1*p+s2*g);
		cout<<r<<endl;
	}

	return 0;
}

