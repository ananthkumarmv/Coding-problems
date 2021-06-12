#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int sqroot, c=0;
	for(int i=0;i<n;i++)
	{
		for(sqroot=2;sqroot*sqroot<a[i];sqroot++);
		if(sqroot*sqroot==a[i]) c++;
	}
	cout<<c;
	return 0;
}

