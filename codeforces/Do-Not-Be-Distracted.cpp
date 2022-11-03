#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		string str;
		cin>>str;
		
		int flag = 0;
		for(int i=0; i<n-1; i++){
				
			int j = i+1;
			while(j<n && str[i] == str[j]){
				j++;
			}
			
			while(j<n){
				if(str[j] == str[i]){
					flag = 1;
					break;
				}
				j++;
			}
			
			if(flag == 1)
				break;
			
		}
		
		if(flag == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";	
		
	}

	return 0;
}
