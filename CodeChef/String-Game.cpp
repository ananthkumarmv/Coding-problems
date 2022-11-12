#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	while(t--){
		
		cin>>n;
		
		string str;
		cin>>str;
		
		if(n&1){
			cout<<"NO\n";
			continue;
		}
			
		else{
			int arr[26] = {0};
			
			for(int i=0; i<n; i++){
				arr[str[i] - 'a']++;
			}
			
			int flag = 1;
			for(int i=0; i<26; i++){
				
				if(arr[i]&1){
					flag = 0;
					break;
				}
				
			}
			
			flag ? cout<<"YES\n" : cout<<"NO\n";
			
		}
		
	}

	return 0;
}
