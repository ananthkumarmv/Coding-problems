#include <bits/stdc++.h>

using namespace std;

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main(){
	string str[] = "An  an th kuma r";
	
	
	cout<<removeSpaces(str);


    return 0;
}


