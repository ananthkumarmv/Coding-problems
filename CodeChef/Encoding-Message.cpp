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
		
		int tn = n;
		if(tn%2 != 0)
			tn = tn-1;
			
		string str;
		cin>>str;
		
		int j=0;
		for(int i=0; i<tn/2; i++){
			
			swap(str[j], str[j+1]);
			j +=2;
			
		}
		
		for(int i=0; i<n; i++){
			str[i] = (char)('z' - (str[i] - 'a'));
		}
		
		cout<<str<<"\n";
		

	}

	return 0;
}
