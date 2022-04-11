#include<iostream>

using namespace std;

void distributeN(int a, int b, int c, int n){
	
	int max1 = max(a, b);
	int max2 = max(b, c);
	
	int maximum = max(max1, max2);
	
	int sum = a+b+c;
	int p = (3 * maximum) - sum;
	int diff = n-p;
	
	// checking if differencr is divisible by 3
	if(diff < 0 || diff % 3)
		cout<<"No";
	else
		cout<<"Yes";
	
}


int main(){
	
	int a, b, c, n;
	
	cin>>a>>b>>c;
	cin>>n;
	
	distributeN(a, b, c, n);

    return 0;
}


