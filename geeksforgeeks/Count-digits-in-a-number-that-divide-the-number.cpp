#include<iostream>

using namespace std;

int countDigit(int n){
	int temp=n, count =0;
	
	while(temp != 0){
		int d = temp %10;
		temp /= 10;
		
		if(d>0 && n%d == 0)
			count++;
	}
	
	return count;
	
}


int main(){
	int n = 1012;
	
	cout<<countDigit(n);

    return 0;
}


