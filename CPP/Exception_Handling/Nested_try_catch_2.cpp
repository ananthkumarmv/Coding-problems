#include<iostream>

using namespace std;


int main(){
	
	try{
		try{
			throw 20;
		}
		
		catch(int n){
			cout<<n<<" Handle Partially \n";
			throw; // Re-throwing the same exception
		}
		
	}
	
	catch(int n){
		cout<<n<<" Handle remaining";
	}

	return 0;
}

