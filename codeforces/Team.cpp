#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int count = 0;
	
	while(n--){
		
		int a[3];
		int t = 0;
		for(int i=0; i<3; i++){
			cin>>a[i];
			if(a[i] == 1)
				t++;
		}
		
		if(t>=2)
			count++;
	}
	
	cout<<count<<"\n";

	return 0;
}
