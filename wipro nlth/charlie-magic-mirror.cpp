#include<iostream>
#include<string>
using namespace std;
int main(){
	string c,mc,temp;
	cin>>c>>mc;
	char fl=mc[0];
	int k=c.find(fl);
	int s=c.size();
	for(int i=0;i<s;i++){
		temp+=mc[(k+i)%s];
	}
	if(temp==c) cout<<"1";
	else cout<<"-1";

	return 0;
}




//string temp=mc+mc;
//temp.find(c)!=string::npos;

