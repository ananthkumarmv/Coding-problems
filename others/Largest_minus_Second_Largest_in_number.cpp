#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
	return a>b;
} 

int main(){
	
	int t=3;
	
	int key = 0;
	while(t--){
		int k;
		cin>>k;
		int a[4];
		int i=0;
		while(k>0){
			a[i++] = k%10;
			k/=10;
		}
		sort(a, a+4, compare);
		key = key + a[0]-a[1];
	}
	
	cout<<key;
	return 0;
}

