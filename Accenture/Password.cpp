#include<iostream>


using namespace std;


int CheckPassword(char str[], int n, int min){
	if(n<min) 
		return 0;
	
	if(str[0]-'0'>=0 && str[0]-'0'<=9)
		return 0;
		
	int i=0, cap=0, num=0;
	
	while(i<n){
		if(str[i]==' '|| str[i]=='+')
			return 0;
			
		if(str[i]>=65 && str[i]<=90)
			cap++;
		
		else if(str[i]-'0'>=0 && str[i]-'0'<=9)
			num++;
		
		i++;
	}	
	
	return (cap>0 && num>0);
}



int main(){
	string s;
	int min;
	
	getline(cin, s);
	cin>>min;
	int len =s.size();
	char *c = &s[0];
	
	
	if(CheckPassword(c, len, min)){
		cout<<"Valid";
	}
	else cout<<"Not valid";
	
	return 0;
}

