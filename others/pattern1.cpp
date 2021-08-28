#include<iostream>

//  1
// 232
//34543



using namespace std;

int main(){
	
	int n=3;
	for(int i=1;i<=n;i++){
		//space
		for(int j=1;j<=n-i;j++)
			cout<<" ";
		
		//increasing numbers
		int val=i;
		for(int count=1;count<=i;count++){
			cout<<val;
			val+=1;
		}
		val-=2;
		//decreasing numbers
		for(int cnt=1;cnt<=i-1;cnt++){
			cout<<val;
			val=val-1;
		}
		cout<<endl;
	}

	return 0;
}

