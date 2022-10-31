#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	
	cin>>n>>m;
	
	int k = 0;
	for(int i=1; i<=n; i++){
		
		if(i&1){
			for(int j=1; j<=m; j++){
				cout<<"#";
			}
		}
		
		else{
			k++;
			for(int j=1; j<=m; j++){
				if(j == m && k%2 != 0){
					cout<<"#";
				}	
				
				else if(j == 1 && k%2 == 0){
					cout<<"#";
				}
				else
					cout<<".";
			}
		}
		
		cout<<"\n";
	}

	return 0;
}
