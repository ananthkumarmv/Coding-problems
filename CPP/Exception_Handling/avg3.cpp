#include<iostream>

using namespace std;

int avg(int *arr, int n) throw(string, int) // to specify that the function handling exception
{
	if(n==0) throw 0;
	if(n==5) throw string("Array size is zero");
	
	int sum=0;
	
	for(int i=0; i<n; i++) sum=sum+arr[i];
	
	return sum;
}


int main(){
	
	int arr[]={1,2,3};
	int n=0;
	
	try{
		int res=avg(arr,n);
		cout<<res;
	}
	
	catch(int e){
		cout<<e;
	}
	
	catch(string &e){
		cout<<e;
	}

	return 0;
}

