#include<iostream>


using namespace std;

void printABCDPattern(int n){
	char ch;
	
	for(int i=1;i<=n;i++){
		ch='A';
		for(int j=1; j<=n-i+1;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}


int main(){
	int n;
	cin>>n;
	printABCDPattern(n);

	return 0;
}

