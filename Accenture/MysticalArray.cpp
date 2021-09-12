#include<iostream>

using namespace std;


int mysticalarray(int *a, int n, int key){
	
	int count=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			while(a[i+1]<=a[i]){
				a[i+1] = a[i+1] + key;
				count++;
			} 
		}
	}
	
	return count;
}


int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int key;
	cin>>key;
	
	cout<<mysticalarray(a, n, key);

	return 0;
}

