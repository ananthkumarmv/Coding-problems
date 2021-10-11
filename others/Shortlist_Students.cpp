#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int m;
	cin>>m;
	
	int stu[m];
	for(int i=0; i<m;i++) cin>>stu[i];
	int flag=0, c=0;
	for(int i=0; i<m; i++){
		flag=0;
		for(int j=0; j<n;j++){
			if(stu[i]==a[j]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			c=1;
			break;
		} 
	}
	
	if(c==0) cout<<"Yes";
	else cout<<"No";
	
	
	
	return 0;
} 

