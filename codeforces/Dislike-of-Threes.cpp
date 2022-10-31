#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[1000];
	
	int j = 0;
	for(int i=1; i<=1666; i++){
		
		if(i%3 !=0 && i%10 != 3){
			arr[j] = i;
			j++;
		}
		
	}

	int t;
	cin>>t;
	
	int k;
	while(t--){
		
		cin>>k;
		
		cout<<arr[k-1]<<"\n";
		
	}

	return 0;
}
