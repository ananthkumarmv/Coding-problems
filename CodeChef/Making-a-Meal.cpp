#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int c=0, o=0, d=0, e=0, h=0, f=0;
		
		int n;
		cin>>n;
		
		string str;
		for(int i=0; i<n; i++){
			
			cin>>str;
			
			int len = str.length();
			for(int i=0; i<len; i++){
				
				switch(str[i]){
					
					case 'c': c++;
							  break;
					
					case 'o': o++;
							  break;
							  
					case 'd': d++;
							  break;
							  
					case 'e': e++;
							  break;	
							  	  
					case 'h': h++;
							  break;		  
							  
					case 'f': f++;
							  break;
					
				}
				
			}
			
			
			
		}
		
		int mini = min(c/2, min(o, min(d, min(e/2, min(h, f)))));
			
		cout<<mini<<"\n";
		
		
	}

	return 0;
}
