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
	
	int n;
	cin>>n;
	
	if(n<10){
		cout<<n<<"\n";
		return;
	}
	
	int x = n;
	int cnt = 0;
	
	while(x>0){
		cnt++;
		x /= 10;
	}
	
	int divNum = 0;
	
	while(cnt>0){
		divNum = divNum*10 + 1;
		cnt--;
	}
	
	int sum = 0;
	
	if(divNum<=n){
		sum += n/divNum;
	}
	
	divNum /= 10;
	
	while(divNum>0){
		sum += 9;
		divNum /= 10;
	}
	
	cout<<sum<<"\n";
		
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
