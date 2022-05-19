#include<iostream>

using namespace std;


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int q;
	cin>>q;
	
	while(q--){
		int q1, l, r;
		cin>>q1>>l>>r;
		if(q1==1){
			arr[l-1] = r;
		}
		
		else{
			int k;
			int m;
			for(int i=l-1; i<r; i++){
				k = arr[l-1] | arr[l];
				m = max(m, k);
			}
			
			cout<<m<<endl;
		}
	}

    return 0;
}


