#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	cin>>n>>x;
	
	string str;
	cin>>str;
	
	for(int i=0; i<x; i++){
		for(int j=0; j<n-1; j++){
			if(str[j] == 'B' && str[j+1] == 'G'){
				swap(str[j], str[j+1]);
				j++;
			}
		}
	}
	
	cout<<str<<"\n";

	return 0;
}
