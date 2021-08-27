#include<iostream>

//5
//1
//11
//111
//1001
//11111



using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
	
	while(row<=n){
		int col =1;
		
		if(row%2!=0){
			//odd row
			while(col<=row){
				cout<<"1";
				col+=1;
			}
		}
		
		else{
			// even row
			cout<<"1";
			while(col<=row-2){
				cout<<"0";
				col=col+1;
			}
			cout<<"1";
			
		}
		
		row+=1;
		cout<<endl;
	}
	
	
	return 0;
}


