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

	int n;
	cin>>n;
	
	int arr[n][n], r[n]={0}, c[n]={0}, win=0;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>arr[i][j];
	
	if(n == 1){
		cout<<0<<nl;
		return 0;
	}
		
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			r[i] += arr[i][j];
			c[i] += arr[j][i];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(r[i]<c[j])
				win++;
		}
	}
	
	cout<<win<<nl;
	

	return 0;
}
