#include<iostream>
#include<limits>

using namespace std;

char* FrequentCharacterReplaced(char *str, char c){
	int ascii[26]={0};
	for(int i=0; str[i]!='\0';i++)
		ascii[str[i]-'a']++;
	
	int max=INT_MIN;
	char maxchar;
	for(int i=0;i<26;i++){
		if(ascii[i]>max){
			max=ascii[i];
			maxchar= (char)'a'+i;
		}
	}
	
	for(int i=0; str[i]!='\0';i++){
		if(str[i]==maxchar)
			str[i]=c;
	}
	
	return str;
}



int main(){
	char a[100];
	cin>>a;
	
	char c;
	cin>>c;
	char *b = FrequentCharacterReplaced(a,c);
	for(int i=0; b[i]!='\0'; i++)
		cout<<b[i];

	return 0;
}

