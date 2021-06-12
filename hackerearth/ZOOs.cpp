/*You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if .

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo
Sample Output
Yes */






#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char s[20];
    cin>>s;
    int z=0,o=0;
    int a=strlen(s);
    for(int i=0;i<a;i++){
          if(s[i]=='Z'||s[i]=='z')
             z++;
          else o++;
    }
    if((2*z)==o)
      cout<<"Yes";
    else cout<<"No";

}
