#include<iostream>

using namespace std;


int OperationsBinaryString(char *str){
	int len =0;
	int ans= str[0]-'0';
	for(len=0;str[len]!='\0';len++);
	for(int i=1;i<len-1;i++){
		if(str[i]=='A'){
			ans = ans & (str[i+1]-'0');
		}
		
		else if(str[i]=='B'){
			ans |= (str[i+1]-'0');
		}
		else if(str[i]=='C'){
			ans ^= (str[i+1]-'0');
		}
	}
	return ans;
}


int main(){
	char str[1000];
	cin>>str;
	cout<<OperationsBinaryString(str);
	
	return 0;
}
