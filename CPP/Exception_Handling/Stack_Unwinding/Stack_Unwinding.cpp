#include<iostream>

using namespace std;


void f1() throw(int){
	cout<<"f1 starts \n";
	
	throw 100;
	
	cout<<"f1 ends \n";
}


void f2() throw(int){
	cout<<"f2 starts \n";
	f1();
	cout<<"f2 ends \n";
}


void f3(){
	cout<<"f3 starts \n";
	
	try {
		f2();
	}
	
	catch(int n){
		cout<<n<<" caught exception \n";
	}
	
	cout<<"f3 ends \n";
}


int main(){
	
	f3();
	cout<<"Bye...";

	return 0;
}

