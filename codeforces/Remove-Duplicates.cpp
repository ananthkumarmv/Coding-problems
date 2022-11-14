#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
			
			
	unordered_set<int> us;
	vector<int> v;
	
	for(int i=n-1; i>=0; i--){
		
		if(us.find(arr[i])==us.end()){
			us.insert(arr[i]);
			v.push_back(arr[i]);
		}
		
	}
	
	reverse(v.begin(), v.end());
	
	cout<<v.size()<<"\n";
	int k = v.size();
	for(int i=0; i<k; i++)
		cout<<v[i]<<" ";

	return 0;
}
