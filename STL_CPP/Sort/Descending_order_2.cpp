#include<iostream>
#include<algorithm>

//e can pass the “greater()” function to sort in 
//descending order. This function does a comparison 
//in a way that puts greater elements before.

using namespace std;

int main(){
	
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr+n, greater<int>());
	
	cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	
	return 0;
}

