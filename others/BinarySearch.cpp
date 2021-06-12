#include<bits/stdc++.h>
using namespace std;

int bSearch(int arr[],int size,int item){
int low=0,mid;
int high=size-1;
while(low<=high){ 
 mid=low+(high-low)/2; 
 if(arr[mid]==item) 
 return 1; 
 else if(arr[mid]<item) 
 low=mid+1; 
 else high=mid-1; 
 } 
 return 0;
}

int main(){
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the key: ";
	cin>>k;
	int h;
	h=bSearch(a,n,k);
	if(h==1) cout<<"Found";
	else cout<<"Not Found";
	return 0;
}


