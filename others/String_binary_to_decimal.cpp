#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string s;
	int sum=0;
	int base=1;
	cin>>s;
	for(int i=s.length()-1;i>=0;i--){
		sum=sum+((int)(s[i]-'0'))*base;
		base*=2;
	}
	cout<<sum;
    
    return 0;
}


