#include<iostream>
#include<string>

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

int main(){

	fast;

	int t;
	cin>>t;
	
	int n;
	string str, res;
	while(t--){

		cin>>n>>str;
		
		res = "";
		for(int i=n-1; i>=0; i--){
			
			if(str[i] == '0'){
				
				
				int t = (str[i-2] - 48)*10 + (str[i-1] - 48);
				res = char(t + 'a' -1)  + res;
				
				i -= 2;
			}
			
			else{
				
				res = char((str[i] - 48) + 'a' -1) + res;
				
			}
			
		}
		
		cout<<res<<"\n";	   		   

	}

	return 0;
}
