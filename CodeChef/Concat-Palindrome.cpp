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
	
	int n, m;
	cin>>n>>m;
		
	string a, b;
	cin>>a>>b;
	
	if(n<m)
		swap(a, b);
		
	int freq[26] = {0};
		
	for(int i=0; i<a.length(); i++)
		freq[a[i]-'a']++;
		
	for(int i=0; i<b.length(); i++)
		freq[b[i]-'a']--;
			
	int cnt = 0;
		
	for(int i=0; i<26; i++){
		if(freq[i] < 0 || cnt > 1)
				return false;
		cnt += freq[i]%2;
	}
	
	return (cnt > 1) ? false : true;
			
}
	

int main(){

	fast;

	int t;
	cin>>t;
	while(t--){

		if(solve())
			cout<<"Yes\n";
		else
			cout<<"No\n";	   		   

	}

	return 0;
}
