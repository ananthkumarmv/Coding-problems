#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int maxi = 0, sum = 0, temp = n;
	
	while(n--){
		
		int a;
		cin>>a;
		maxi = max(maxi, a);
		sum += a;
		
	}
	
	maxi = maxi * temp;
	
	cout<<(maxi - sum)<<"\n";
	
	return 0;
}
