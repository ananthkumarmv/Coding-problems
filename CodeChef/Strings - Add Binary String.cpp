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

void solve(){
	string s1;
	string s2;
	cin>>s1>>s2;
	
	int i = s1.length()-1;
	int j = s2.length()-1;
	
	int sum = 0;
	string res = "";
	
	while(i>=0 || j>=0 || sum>0){
		if(i>=0){
			sum = sum + (s1[i]-'0');
			i--;
		}
		if(j>=0){
			sum = sum + (s2[j]-'0');
			j--;
		}
		
		res = char(sum%2 + '0') + res;
		sum = sum/2;
	}
	
	cout<<res<<"\n";
	
}

int main(){

	fast;

	int t;
	cin>>t;
	while(t--){
		solve();	   		   
	}

	return 0;
}
