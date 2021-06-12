//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Output: Because nums[0] + nums[1] == 9, we return [0, 1].



#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void twosum(int a[], int n, int k){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j]==k)){
				cout<<"["<<i<<" ,"<<j<<"]";
			}
		}
	}
}


int main(){
	int a[]={6,2,3,4,1,5,7,9};
	int n,k;
	n=sizeof(a)/sizeof(a[0]);
	cout<<"Enter the number";
	cin>>k;
	twosum(a,n,k);

	return 0;
}


