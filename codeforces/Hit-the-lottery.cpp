#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int tot = 0;
	string str;
	
	while(n--){
		
		
		cin>>str;
		
		if(str == "Tetrahedron")
			tot += 4;
		
		else if(str == "Cube")
			tot += 6;
			
		else if(str == "Octahedron")
			tot += 8;
			
		else if(str == "Dodecahedron")
			tot += 12;
			
		else if(str == "Icosahedron")
			tot += 20;
		
	}
	
	cout<<tot<<"\n";

	return 0;
}
