#include<bits/stdc++.h>

using namespace std;

void solve(string s)

{

int n=s.length();

map<int,int>mp;

int ans=0;

for(int i=0;i<n;i++)

{

if(s[i]=='(')

ans++;

else

ans--;

mp[ans]++;

}

cout<<(ans==0)*mp.begin()->second<<endl;

}

int main()

{

string s;

cin>>s;

solve(s);

}
