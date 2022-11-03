#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	vector<int> prog, math, pe;
	
	int x;
	for(int i=0; i<n; i++){
		
		cin>>x;
		if(x == 1)
			prog.push_back(i+1);
		else if(x == 2)
			math.push_back(i+1);
		else
			pe.push_back(i+1);
		
	}
	
	int w = min(prog.size(), min(math.size(), pe.size()));
	
	cout<<w<<"\n";
	for(int i=0; i<w; i++){
		
		cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<"\n";
			
	}

	return 0;
}
