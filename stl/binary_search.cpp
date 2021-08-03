#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	
	int arr[] = {2, 4, 8, 1, 3};
	
	sort(arr, arr+5);
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	if(binary_search(arr, arr+5, 8)) cout<<"Present";
	else cout<<"Not Present";
		
    return 0;
}


