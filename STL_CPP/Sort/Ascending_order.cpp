#include<iostream>
#include<algorithm>

// it is implemented using hybrid of QuickSort, 
//HeapSort and InsertionSort.By default, it uses QuickSort 
//but if QuickSort is doing unfair partitioning and taking 
//more than N*logN time, it switches to HeapSort and when 
//the array size becomes really small, it switches to InsertionSort. 

using namespace std;

int main(){
	
	
	int arr[] = {3,2,4,5,1,6};
	
	int n = sizeof(arr)/sizeof(int);
	sort(arr, arr+n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}

