#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		
		int fTV = a-c;
		int sTV = b-d;
		
		if(fTV == sTV)
			cout<<"ANY\n";
		else if(fTV<sTV)
			cout<<"First\n";
		else
			cout<<"Second\n";
		
	}

	return 0;
}
