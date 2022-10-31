#include<iostream>

using namespace std;

int main(){
	
	// input file
	// just to take input from this
	freopen("addin.txt", "r", stdin);
	
	
	// outputfile
	freopen("addout.txt", "w", stdout);
	
	int a,b;
	
	cin>>a>>b;
	
	int sum = a+b;
	cout<<sum<<endl;

    return 0;
}


