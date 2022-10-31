#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		string str;
		cin>>str;
		
		int n = str.length();
		
		int nofz = count(str.begin(), str.end(), '0');
		
		cout<<(n - nofz)<<"\n";
		
		string z="";
		for(int i = n-1; i>=0; i--){
			if(str[i] != '0'){
				cout<<str[i]<<z<<" ";
			}
				
			z += '0';
		}
		
		cout<<"\n";
		
	}

	return 0;
}
