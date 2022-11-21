#include<iostream>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define l(s) s.length()
#define asort(a) sort(a, a+n)
#define dsort(a) sort(a, a+n, greater<int>())
#define all(x) x.begin(), x.end()
#define vasort(v) sort(all(v))
#define vdsort(v) sort(all(v), greater<int>())
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define sp(x, y) fixed<<setprecision(y)<<x
#define MOD 1000000007
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)

int main(){

	fast;
	
	int y, a, b, c, d;
	
	cin>>y;
	
	while(true){
		
		y++;
		
		a = y/1000;
		b = y/100 % 10;
		c = y/10 % 10;
		d = y%10;
		
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
			break;
		
	}
	
	cout<<y<<"\n";

	return 0;
}
