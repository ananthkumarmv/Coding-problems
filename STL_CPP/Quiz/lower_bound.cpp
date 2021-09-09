#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[5] = { 4, 5, 1, 0, 1 };
	sort( arr, arr+5 );
	cout<< lower_bound( arr, arr+5, 4 ) - arr<<endl;
	return 0;
}

