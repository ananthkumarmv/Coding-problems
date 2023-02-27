#include<iostream>
#include<vector>
#include <climits>

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

int minLength(vector<string>& strs){
    int mini = INT_MAX;

    int n = strs.size();
    int len;

    for(int i=0; i<n; i++){
        len = strs[i].length();
        if(len < mini)
            mini = len;
    }

    return mini;

}


string solve(){
	
	int n;
	cin>>n;
	
	vector<string> strs;
	
	string str;
	for(int i=0; i<n; i++){
		cin>>str;
		strs.push_back(str);
	}
	
	int minLen = minLength(strs);
	
	string res = "";
	
	for(int i=0; i<minLen; i++){

        for(string& s : strs){
            if(s[i] != strs[0][i])
                return res;

        }
        res += strs[0][i];
    }

    return res;
	
}


int main(){

	fast;

	int t;
	cin>>t;
	while(t--){

		cout<<solve()<<"\n";

	}

	return 0;
}
