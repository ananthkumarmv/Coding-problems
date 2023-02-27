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

bool solve(){
	
	int n;
	cin>>n;
	
	n /= 2;
	
	string str;
	cin>>str;
	
	int lSum = 0;
	int rSum = 0;
	
	for(int i=0; i<n; i++){
			if((str[i] != '4' && str[i] != '7') || (str[n+i] != '4' && str[n+i] != '7'))
			return false;
		
		lSum += str[i] - '0';
		rSum += str[n+i] - '0';
	}
	
	return lSum == rSum;

}

int main(){

	fast;

	if(solve())
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}
