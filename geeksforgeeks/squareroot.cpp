#include<iostream>
using namespace std;
int main(){
	int n, i;
	cin>>n;
    for(i=1;i*i<=n;i++);
    cout<<i-1;

	return 0;
}

