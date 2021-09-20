#include<iostream>

using namespace std;


int main(){
	
	try{
		try{
			throw 20;
		}
		
		catch(int n){
			cout<<"Handle Partially \n";
			throw 30; // Re-throwing an exception
			throw 40; // this line doesn't execute
		}
		
		catch(int n){      // this catch does not any error
		cout<<n<<" Handle remaining"<<"Inside";
		}
	
	}
	
	catch(int n){
		cout<<n<<" Handle remaining";
	}

	return 0;
}

