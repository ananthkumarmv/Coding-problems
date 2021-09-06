#include<iostream>


using namespace std;


int NumberOfCarries(int num1, int num2){
	int c=0;
	int r=0;
	while(num1>0 && num2>0){
		r = r+ num1%10 + num2%10;
		if(r>9) c++;
		r/=10;
		num1/=10;
		num2/=10;
	}
	return c;
}


int main(){
	int num1, num2;
	cin>>num1>>num2;
	
	cout<<NumberOfCarries(num1, num2);
	
	return 0;
}

