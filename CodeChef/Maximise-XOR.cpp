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
	
	string a, b;
	while(t--){

		cin>>a>>b;
		int n = l(a);
		
		int zero=0, one=0;
		for(int i=0; i<n; i++){
			if(a[i]=='1')
				one++;
			else
				zero++;
				
			if(b[i]=='1')
				one++;
			else
				zero++;	
			
		} 
		
		int mini = min(zero, one);
		
		for(int i=0; i<mini; i++)
			cout<<"1";
		for(int i=mini; i<n; i++)
			cout<<"0";
			
		cout<<nl;

	}

	return 0;
}
