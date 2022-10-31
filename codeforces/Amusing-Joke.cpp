#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2, str3;
	
	cin>>str1>>str2>>str3;
	
	int l1 = str1.length();
	int l2 = str2.length();
	int l3 = str3.length();
	if((l1 + l2) != l3){
		cout<<"NO\n";
		return 0;
	}
	
	string s12 = str1 + str2;
	sort(s12.begin(), s12.end());
	sort(str3.begin(), str3.end());
	
	if(s12 != str3)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	
	
	return 0;
}
