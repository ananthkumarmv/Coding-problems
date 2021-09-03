#include<iostream>
#include<algorithm>

using namespace std;


bool compare(int a, int b){
	return a>b;
}


int main(){
	
	
	int arr[] = {3,2,4,5,1,6};
	
	int n = sizeof(arr)/sizeof(int);
	sort(arr, arr+n, compare);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

