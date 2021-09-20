#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	int *ptr;
	
	ptr = (int*)malloc(5*sizeof(int));
	
	cout<<"Enter 5 integer"<<endl;
	
	for(int i=0;i<5;i++){
		cin>>ptr[i];
	}
	cout<<endl<<"User entered value"<<endl;
	
	for(int i=0;i<5;i++){
		cout<<*(ptr+i)<<" ";
	}
	
	free(ptr);
	
//	prints a garbage value after ptr is free
	cout<<endl<<"Garbage value"<<endl;
	
	for(int i=0; i<5; i++){
		cout<<*(ptr+i)<<" ";
	}

	return 0;
}

