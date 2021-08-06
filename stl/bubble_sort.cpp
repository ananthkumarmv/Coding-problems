#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

template<class T>
void bubbleSort(T a[], int n){
	for(int i=0;i<n-1;i++)
		for(int j=n-1; i<j; j--)
			if(a[j]<a[j-1])
				swap(a[j], a[j-1]);
}

int main() {
	
	int a[5] = {50, 30, 20 ,40};
	bubbleSort<int>(a, 4);
	
	cout<<"Sorted array: ";
	for(int i=0;i<4; i++) cout<<a[i]<<" ";
    
    return 0;
}


