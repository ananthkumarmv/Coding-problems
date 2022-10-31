#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int a, b, c, cnt;
	while(t--){
		
		cin>>a>>b;
		
		c = a+b;
		
		cnt = 0;
		while(c>0){
			
			int n = c%10;
			
			if(n == 0 || n == 6 || n == 9)
				cnt += 6;
				
			else if(n == 1)
				cnt += 2;
				
			else if(n == 4)
				cnt += 4;
				
			else if(n == 7)
				cnt += 3;
			
			else if(n == 8)
				cnt += 7;	
				
			else
				cnt += 5;
				
			c /= 10;
		}
		
		cout<<cnt<<"\n";
		
		
	}

	return 0;
}
