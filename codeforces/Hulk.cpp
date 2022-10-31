#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		
		if(i%2 != 0)
			cout<<"I hate";
		else
			cout<<"I love";
			
		if(i < n)
			cout<<" that ";
		else
			cout<<" it";
			
		i++;
		
	}

	return 0;
}
