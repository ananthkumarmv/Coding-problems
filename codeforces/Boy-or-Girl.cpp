#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin>>str;
	
	bool arr[26] = {false};
	
	int count = 0;
	for(int i=0; i<str.length(); i++){
		
		if(arr[str[i] - 'a'] == true)
			continue;
		
		else{
			arr[str[i] - 'a'] = true;
			count++;
		}
		
	}
	
	if(count%2 == 0)
		cout<<"CHAT WITH HER!\n";
	else
		cout<<"IGNORE HIM!\n";

	return 0;
}
