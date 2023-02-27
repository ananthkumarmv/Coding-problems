#include<iostream>
#include<stack>

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

bool check(char a, char b){
	if(a == '{' && b == '}' || a == '(' && b == ')' ||a == '[' && b == ']')
		return true;
	
	return false;
}

void solve(){
	
	string str;
	cin>>str;
	
	stack<char> st;
	
	int n = str.length();
	
	int flag = 1;
	
	for(int i=0; i<n; i++){
		if(str[i] == '{' || str[i] == '[' || str[i] == '(')
			st.push(str[i]);
		else{
			if(st.empty() == true){
				flag = 0;
				break;
			}
			else if(check(st.top(), str[i]) == false){
				flag = 0;
				break;
			}
			st.pop();
		}
	}
	
	if(st.empty() && flag)
		cout<<"1"<<"\n";
	else
		cout<<"0"<<"\n";
	
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
