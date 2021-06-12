/*Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much. He calls a string "lovely string" if it contains either all the lowercase vowels or all the uppercase vowels or both, else he calls that string "ugly string". 

For more clarification, see the sample testcase explanation.

Input

First line contains T, the number of test cases.
Next T lines contain a single string S.

Output

For each test case, print "lovely string" or "ugly string"  (without quotes)  according to the definition of Bob.

Constraints

string contains only lowercase and uppercase Latin letters. 



Sample Input
3
omahgoTuRuLob
OmAhgotUrulobEI
aeKORONAoiBATCHu
Sample Output
ugly string
lovely string
lovely string*/




#include<bits/stdc++.h>
#include<string>    
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
       	cin>>s;
    	string val="AEIOUaeiou";
    	int a=0,b=0;
        for(int i=0; i<s.length(); i++){
           if(s[i]==val[0] || s[i]==val[1] || s[i]==val[2] || s[i]==val[3] || s[i]==val[4] || s[i]==val[5] || s[i]==val[6] || s[i]==val[7] || s[i]==val[8] || s[i]==val[9]){
    		for(int y=0;y<10;y++)
   			{
   				if(s[i]==val[y])
   					val[y]=0;
   			}
	   		}
        }
    	for(int y=0;y<10;y++)
    	{
    		if(val[y]>0&&y<5)
    			a++;
    		else if(val[y]>0&&y>4)
    			b++;
    	}
    	cout<<val<<endl;
        if(a==0 || b==0){
        	cout<<"lovely string"<<endl;
    	}
    	else
    	{
    		cout<<"ugly string"<<endl;
    	}
    }
    	return 0;
}



