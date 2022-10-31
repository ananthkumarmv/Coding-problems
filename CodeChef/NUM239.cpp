#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	
	while(t--){
		int l, r;
		cin>>l>>r;
		int count=0;
		for(int i=l; i<=r; i++)
			if(i%10==2 || i%10==3 || i%10==9)
				count++;
		
		cout<<count<<"\n";
		
	}
	
	return 0;
}
