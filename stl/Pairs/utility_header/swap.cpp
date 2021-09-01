#include<iostream>
#include<utility>

using namespace std;

int main() {
	
	int a[4]; 				//empty
	int b[4]={1,2,3,4};
	swap(a,b);
	
	cout<<"After swapping"<<endl;
	for(int i=0; i<4;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"After swapping"<<endl;
	for(int i=0; i<4;i++){
		cout<<b[i]<<" ";
	}
    
    return 0;
}


