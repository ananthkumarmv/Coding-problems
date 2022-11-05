#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){

		string str;
		cin>>str;
		
		int arr[52] = {0};
		
		int n = str.length();
		for(int i=0; i<n; i++){
			
			if(str[i] >= 'A' && str[i] <= 'Z')
				arr[str[i] - 'A']++;
			
			else
				arr[str[i] - 'a' + 26]++;
			
		}
		
		int tot = 0;
		for(int i=0; i<52; i++){
			tot += arr[i]/2 + arr[i]%2;
		}
		
		cout<<tot<<"\n";
		
	}

	return 0;
}
