#include<iostream>
#include<cmath>
using namespace std;

void print(int n){
	
	for(int i=0; i<100000; i++){
		
		if(pow(i+1, 3) - pow(i, 3) == n){
			cout<<i<<" "<<i+1;
			return;
		}
	}
	
}

// to check if n is a perfect square
bool isPerfectSquare(long double x){
	
	// finding floating point value of
	// square root of x.
	long double sr = sqrt(x);
	
	// if square root is an integer
	return ((sr - floor(sr)) == 0);
	
}

//=> N = (K+1)3 – K3 
//=> N = 3*K2 + 3*K + 1 
//=> 12*N = 36*K2 + 36*K + 12 
//=> 12*N = (6*K + 3)2 + 3 
//=> 12*N – 3 = (6*K + 3)2 
//which means (12*N – 3) must be a perfect square to break N into difference of two consecutive cubes.

bool diffCube(int n){
	
	
	// checking if 12 * n - 3 is a
	// perfect squre or not
	return isPerfectSquare(12 * n - 3);
	
}


int main(){
	
	int n;
	cin>>n;
	
	if(diffCube(n)){
		cout<<"Yes\n";
		print(n);
	}
	else
		cout<<"No";


    return 0;
}


