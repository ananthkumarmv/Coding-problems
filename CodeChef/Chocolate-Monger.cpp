#include<iostream>
#include<set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, x;
	
	long long a;
	
	while(t--){
		
		cin>>n>>x;
		set<long long> s;
		
		for(int i=0; i<n; i++){
			cin>>a;
			s.insert(a);
		}
		
		int no_of_dc = s.size();
		
		if((n - x) >= no_of_dc)
			cout<<no_of_dc<<"\n";
		else
			cout<<(n - x)<<"\n";
		
	}

	return 0;
}
