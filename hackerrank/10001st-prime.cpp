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
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)


bool isPrime(int n){
		
	if(n==2 || n==3)
		return true;
		
	if(n%2 == 0 || n%3 == 0)
		return false;
		
	for(int i=5; i*i<=n; i+=6){
		
		if(((n%i) == 0) || ((n%(i+2)) == 0))
			return false;
		
	}
	
	return true;
	
}


int main(){

	fast;

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		
		int p = 0;
		
		int i;
		
		for(i=2; p<n; i++){
			
			if(isPrime(i)){
				p++;
			}
				
		}

		i--;
		cout<<i<<endl;	   		   

	}

	return 0;
}
