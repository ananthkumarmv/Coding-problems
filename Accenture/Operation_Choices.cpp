#include<iostream>

using namespace std;

int OperationChoices(int c, int a , int b ){
	
	switch(c){
		case 1: return a+b;
				  break;
				  
		case 2: return a-b;
				  break;
				  
		case 3: return a*b;
				  break;
		
		case 4: return a/b;
				  break;
	}
	
}

int main(){
	
	int a,b,c;
	
	cin>>c>>a>>b;
	
	cout<<OperationChoices(c,a,b);
	return 0;
}

