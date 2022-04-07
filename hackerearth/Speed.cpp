#include<iostream>

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define z int
#define g string
#define f(i,n) for(z i=0;i<n;i++)
#define ll long long

using namespace std;

int main(){
	FIO;
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		
		int count=0;
		int mini = arr[0]+1;
		for(int i=0; i<n; i++){
			if(arr[i] < mini){
				mini = arr[i];
				count++;
			}
		}
		
		cout<<count<<"\n";
		
	}
	

    return 0;
}


