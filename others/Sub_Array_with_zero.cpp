#include<iostream>
#include<utility>
#include<vector>

using namespace std;

void printAllSubarrays(int arr[], int n){
	vector< pair<int, int> >v;
	for(int i=0;i<n;i++){
		int sum=0;
		
		for(int j=i; j<n;j++){
			sum+=arr[j];
			
			if(sum==0){
				v.push_back(make_pair(i, j));
			}
		}
	}
	
	for(int i=v.begin();i!=v.end(); i++){
		for(int j=)
	}
}


int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printAllSubarrays(arr, n);
 
    return 0;
}

