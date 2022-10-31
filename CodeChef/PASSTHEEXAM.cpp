#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int a, b, c;
		cin>>a>>b>>c;
		
		int tot = a+b+c;
		if(a >=10 && b >= 10 && c >= 10 && tot >= 100)
			cout<<"PASS\n";
		
		else
			cout<<"FAIL\n";
		
	}

	return 0;
}
