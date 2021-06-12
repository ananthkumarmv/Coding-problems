/*There are three integers k,m,n. You have to convert the number k to m by performing the given operations:
    Multiply k by n
    Decrease k by 2.
    Decrease k by 1.
You have to perform the above operations to convert the integer from k to m and find the minimum steps.*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Without Recursion ---------------------------------------------------------------------
// absolute difference
 int adiff(int a, int b){
 	return abs(a-b);
}

// // function to find min steps to reach goal
// int minSteps(int k, int m, int n){
// 	int count = 0;
// 	while(k!=m){
// 		if(k<m){
// 			if(adiff(m, k*n) <= adiff(m, k-2) && adiff(m, k*n) <= adiff(m, k-1)){
// 				count++;
// 				k *= n;
// 			}
// 			else if(adiff(m, k-2) < adiff(m, k-1) && adiff(m, k-2) < adiff(m, k*n)){
// 				count++;
// 				k -= 2;
// 			}
// 			else{
// 				count++;
// 				k -= 1;
// 			}
// 		}
// 		else{
// 			if(adiff(m, k-2) < adiff(m, k-1)){
// 				count++;
// 				k -= 2;
// 			}
// 			else{
// 				count++;
// 				k -= 1;
// 			}
// 		}
// 	}

// 	return count;
// }

// with recursion --------------------------------------------------------------------
int minSteps(int k, int m, int n){
	if(k>=m){
		return (k-m)/2 + (k-m)%2;
	}

	if(m%n==0){
		return 1 + minSteps(k,m/n,n);
	}
	else{
		int x;
		x = (m/n+1)*n;
		return (x-m)/2 + (x-m)%2 + minSteps(k,x,n);
	}
}

// main function
int main(){
	int num;
	cin>>num;

	while(num--){
		int k,m,n;
		cin >> k >> m >> n;
		cout << minSteps(k,m,n)<<endl;
	}
	return 0;
}
