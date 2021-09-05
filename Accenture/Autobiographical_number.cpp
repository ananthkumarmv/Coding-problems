#include<iostream>


using namespace std;


int Autobiographical(char* str){
	int freq[10]={0};
	int count=0;
	
	for(int i=0;  str[i]!='\0'; i++)
		freq[str[i]-'0']++;
		
	for(int i=0;i<10;i++){
		if(freq[i]>0) count++;
	}
	for(int i=0;str[i]!='\0';i++){
		freq[i] = freq[i]-(str[i]-'0');
	}
	
	for(int i=0;i<10;i++){
		if(freq[i]!=0)
			return 0;
	}
	return count;
}


int main(){
	
	char str[11];
	
	cin>>str;
	
	cout<<Autobiographical(str);

	return 0;
}

