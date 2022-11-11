#include<iostream>
#include<set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		string str;
		cin>>str;
		
		set<char> s;
		
		for(int i=0; i<n; i++)
			s.insert(str[i]);
			
		cout<<(n + s.size())<<"\n";
		
	}

	return 0;
}
