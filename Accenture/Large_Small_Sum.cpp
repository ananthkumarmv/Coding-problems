#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
	return a>b;
}


int LargeSmallSum(int *a, int n){
	
	if(n<=3) return 0;
	int even[n]={0};
	int odd[n]={0};
	int ev=0, od=0;
	for(int i=0;i<n;i++){
		if((i+1)%2!=0){
			even[ev]=a[i];
			ev++;
		}
		else {
			odd[od]=a[i];
			od++;
		}
	}
	sort(even, even+ev, compare);
	sort(odd, odd+od);
	
	
	return (even[1]+odd[1]);
}



int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<LargeSmallSum(a, n);

	return 0;
}

