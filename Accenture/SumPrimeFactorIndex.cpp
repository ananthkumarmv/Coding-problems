#include<bits/stdc++.h>

using namespace std;


vector< pair<int, int> > primeFactor(int num){
	
	
	vector< pair<int, int> > vec;
	
	int c=0;
	
	while(num%2==0){
		c++;
		num/=2;
	}
	if(c>0){
		vec.push_back(make_pair(2, c));
	}
	
	for(int i=3; i<=sqrt(num); i=i+2){
		int c=0;
		if(num%i==0){
			c++;
			num/=i;
		}
		if(c>0){
			vec.push_back(make_pair(i, c));
		}
	}
}


int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	int num;
	cin>>num;
	
	vector< pair<int, int> > vect = primeFactor(num);
	
	int sum=0;
	for(int i=0;i<vect.size();i++){
		sum=sum+ (vect[i].first*arr[vect[i].first]);
 	}
	
 	cout<<sum;
	
	return 0;
}

