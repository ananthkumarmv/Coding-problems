#include<iostream>
#include<cstring>
#include<vector>

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
#define MAX 1000001

vector<ll> SieveOfEratosthenes(){
	
	vector<ll> primes;
	
	bool prime[MAX];
	
	memset(prime, true, MAX);
	
	for(ll p=2; p*p<=MAX; p++){
		
		if(prime[p]){
			
			for(ll i=p*2; i<=MAX; i+=p)
				prime[i] = false;
			
		}
		
	}
	
	for(ll p=2; p<=MAX; p++){
		
		if(prime[p])
			primes.push_back(p);
		
	}
	
	return primes;
}


int main(){

	fast;

	int t;
	cin>>t;
	
	vector<ll> primes = SieveOfEratosthenes();
	while(t--){

		ll n;
		cin>>n;
		
		ll sum=0; 
		for(ll i=0; primes[i]<=n; i++){
			sum += primes[i];
		}
		
		cout<<sum<<nl;
		
	}

	return 0;
}
