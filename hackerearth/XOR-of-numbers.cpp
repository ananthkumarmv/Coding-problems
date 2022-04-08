#include<iostream>

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define z int
#define g string
#define f(i,n) for(z i=0;i<n;i++)
#define ll long long

using namespace std;

int main(){
	FIO;
	
	int n, q;
    cin>>n>>q;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    while(q--){
        int l, r, op = 0 ;
        cin>>l>>r;
        for(int i=1;i<=n;i++){
            if(i<l || i>r)
            	op = op ^ arr[i-1];
        }
        
        cout<<op<<" ";
    }

    return 0;
}


