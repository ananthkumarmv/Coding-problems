#include<iostream>
#include<cmath>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x = 0;
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin>>x;
	
			if(x == 1)
				cout<< abs(i - 3) + abs(j - 3)<<endl;
		}
	}
	
	return 0;
}
