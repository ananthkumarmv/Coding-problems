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
		
		int flag = 1;
		
		int cnt = 0;
		
		for(int i=0; i<n; i++){
			
			if(str[i] == 'H')
				cnt++;
				
			else if(str[i] == 'T')
				cnt--;
				
			if(cnt>1 || cnt<0){
				flag = 0;
				break;
			}
		}
		
		if(flag == 1 && cnt == 0)
			cout<<"Valid\n";
			
		else
			cout<<"Invalid\n";
		
	}

	return 0;
}
