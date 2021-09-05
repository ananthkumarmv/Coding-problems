#include<iostream>


using namespace std;


int password(string str){
	if(str.length()<4) return 0;
	if((str[0]-'0')>=0 && (str[0]-'0')<=9) return 0;
	
	int num=0, cap=0;
	for(int i=0;i<str.length();i++){
		if(str[i]==' ' || str[i]=='/') return 0;
		
		else if((str[i]-'0')>=0 && (str[i]-'0')<=9) num++;
		
		else if((str[i]>='A' && (str[i])<='Z')) cap++;
	}
	
	return (cap>0 && num>0);
}

int main(){
	
	string str;
	getline(cin, str);
	
	cout<<password(str);

	return 0;
}
