#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int arr[4];
	int cnt;
	while(t--){
		
		for(int i=0; i<4; i++)
			cin>>arr[i];
		
		cnt = 0;
		for(int i=1; i<4; i++)
			if(arr[i] > arr[0])
				cnt++;
		
		cout<<cnt<<"\n";
	}

	return 0;
}
