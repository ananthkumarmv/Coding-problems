#include<iostream>
#include<math.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	string str1, str2;
	cin>>str1>>str2;
	
	int tot = 0;
	for(int i=0; i<n; i++){
		
		tot += min(abs(str1[i] - str2[i]), 10 - abs(str1[i] - str2[i]));
		
	}
	
	cout<<tot<<"\n";
	
	return 0;
}
