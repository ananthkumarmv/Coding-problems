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

int main(){

	fast;

	int t;
	cin>>t;
	
	string str;
	while(t--){

		cin>>str;
		int n = l(str);
		
		int x = str[n-1] - '0';
		
		if(x%2 == 0){
			cout<<0<<endl;
		}
		
		else if(n==1 && x%2 != 0){
			cout<<-1<<endl;
		}
		
		
		else if((str[0]-'0')%2 == 0){
			cout<<1<<endl;
		}
		
		else {
			bool flag = false;
			for(int i=1; i<n-1; i++){
				int z = str[i] - '0';
				if(z%2 == 0){
					flag = true;
					break;
				}
			}
			
			if(flag == true)
				cout<<2<<endl;
			else
				cout<<-1<<endl;
			
		}
			   		   
	}

	return 0;
}
