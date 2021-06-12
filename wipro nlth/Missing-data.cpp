#include<iostream>
using namespace std;
int main(){
	char os[100], rs[100];
	int i;
	cin>>os>>rs;
	for(i=0;os[i]!='\0';i++){
		if(os[i]!=rs[i]) {
			cout<<os[i];
			break;
		}
	}
	if(os[i]=='\0') cout<<"NA";
	

	return 0;
}

