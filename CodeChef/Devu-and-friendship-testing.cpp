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
		set<int> s;
		cin>>n;
		
		while(n--){
			int a;
			cin>>a;
			s.insert(a);
		}
		
		cout<<s.size()<<"\n";
		
	}

	return 0;
}
