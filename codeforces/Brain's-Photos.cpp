#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	
	cin>>n>>m;
	
	char c;
	
	int flag = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			
			cin>>c;
			
			if(c == 'C' || c == 'M' || c == 'Y'){
				flag = 1;
				break;
			}
			
		}
		
		if(flag == 1){
			break;
		}
	}
	
	if(flag)
		cout<<"#Color\n";
	else
		cout<<"#Black&White\n";

	return 0;
}
