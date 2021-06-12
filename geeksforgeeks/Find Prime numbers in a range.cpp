#include<bits/stdc++.h>
using namespace std;

int main(){
	int M,N;
	cin>>M>>N;
	int k=0;
    int flag;
        
        for (int i = M; i <= N; i++) {
        // Skip 0 and 1 as they are
        // niether prime nor composite
        if (i == 1 || i == 0)
            continue;
 
        // flag variable to tell
        // if i is prime or not
        flag = 1;
 
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1){
		
            cout<<i<<" ";
	            
	        }
    }
}
