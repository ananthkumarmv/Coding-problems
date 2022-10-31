#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, p, q;
	
	int arr[250];
	
	cin>>n>>p;
	for(int i=0; i<p; i++)
		cin>>arr[i];
		
	cin>>q;
	
	for(int i=p; i<p+q; i++)
		cin>>arr[i];
		
	sort(arr, arr+(p+q));
	
	int cnt=1;
	for(int i=0; i<p+q-1; i++)
		if(arr[i] != arr[i+1])
			cnt++;
	
	(cnt == n) ? cout<<"I become the guy.\n" : cout<<"Oh, my keyboard!\n";

	return 0;
}
