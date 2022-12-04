#include<iostream>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define l(s) s.length()
#define asort(a) sort(a, a+n)
#define dsort(a) sort(a, a+n, greater<int>())
#define all(x) (x).begin(), (x).end()
#define vasort(v) sort(all(v))
#define vdsort(v) sort(all(v), greater<int>())
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define RESET(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a*(b/gcd(a,b)))
#define sp(x, y) fixed<<setprecision(y)<<x
#define MOD 1000000007
#define nl '\n'
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)

int main(){

	fast;

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		
		int cons = 0;
		int gth = 1;
			
		bool flag = true;
		
		if(arr[0] == 1){
			gth++;
		}
		else{
			cons++;
		}
		
		for(int i=1; i<n; i++){
			
			if(arr[i] == 1){
				
				if(arr[i-1] == 1){
					gth += 5;
					cons = 0;
				}
				else{
					gth++;
					cons = 0;
				}

			}
				
			else{
				cons++;
				
				if(cons == 2){
					cout<<"-1"<<nl;
					flag = false;
					break;
				}
			}
			
		}
		
		if(flag)
			cout<<gth<<nl;	   		   

	}

	return 0;
}
