#include<iostream>
#include<algorithm>

using namespace std;


int productSmallestPair(int *arr, int n, int sum){
	
	if(n<2) return -1;
	
	sort(arr,arr+n);
	
	int check = arr[0]+arr[1];
	if(check<=sum) return arr[0]*arr[1];
	return 0;
	
}


int main(){
	
	int n, sum;
	cin>>sum;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	cout<<productSmallestPair(arr, n, sum);
	

	return 0;
}

