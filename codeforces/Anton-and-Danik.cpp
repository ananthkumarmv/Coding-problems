#include <iostream>

using namespace std;

int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    
    int a(0), d(0);
    for(int i=0; i<n; i++){
    	if(str[i] == 'A')
    		a++;
    	else
    		d++;
	}
	
	if(a>d)
		cout<<"Anton\n";
	else if(d>a)
		cout<<"Danik\n";
	else
		cout<<"Friendship\n";

    return 0;
}
