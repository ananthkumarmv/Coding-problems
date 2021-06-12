int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    
    sort(array.begin(), array.end());

    for(int i = 0; i < n; i++)
    {
    if(i+1 != array[i])
    return (i+1);
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n;i++){
		k^=a[i];
	}
	for(int i=1;i<=n+1;i++) k^=i;
	cout<<k;


	return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int g=((n+1)*(n+2))/2;
	int s=0;
	for(int i=0;i<n;i++) s+=a[i];
	cout<<g-s;


	return 0;
} 

