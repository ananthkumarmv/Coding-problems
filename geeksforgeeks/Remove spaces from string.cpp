#include<iostream>

using namespace std;

void removeSpace(char *str){
	int count = 0;
	
	for(int i=0; str[i]; i++){
		if(str[i] != ' ')
			str[count++] = str[i];
	}
	
	str[count] = '\0';
	
}

int main(){
	
	string str[] = "An  an th kuma r";
	removeSpace(str);
	
	cout<<str;
	
    return 0;
}


