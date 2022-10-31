#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int arr[26] = {0};
		
		string str;
		cin>>str;
		
		int n = str.length();
		for(int i=0; i<n/2; i++){
			
			arr[str[i] - 'a']++;
			arr[str[n-i-1] - 'a']--;
			
		}
		
		int flag = 1;
		for(int i=0; i<26; i++){
			
			if(arr[i] != 0){
				flag = 0;
				break;
			}
			
		}
		
		flag ? cout<<"YES\n" : cout<<"NO\n";
		
	}

	return 0;
}
