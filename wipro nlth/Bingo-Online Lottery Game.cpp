#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int p=0,m,l;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(p<(a[i]*a[j])){
				p=a[i]*a[j];
				m=a[i];
				l=a[j];
			} 
		}
	}
	cout<<m+l;
	return 0;
}

