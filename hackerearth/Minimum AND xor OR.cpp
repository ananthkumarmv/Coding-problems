
#include<bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MOD 1000000007
#define mod 998244353
 
signed main()
{
	FIO;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,sum=0;
		cin>>n>>k;
 
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			sum+=a;
		}
 
		ll p = sum/(k+1);
 
		p++;
 
		ll ans=max(0LL,p-n);
 
		cout<<ans<<endl;
 
	}
 
}

