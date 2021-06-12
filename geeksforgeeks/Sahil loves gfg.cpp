#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
	   cin.ignore(); 
       int c=0;
       for(int i=0;i<s.size()-2;i++)
       {
           if (s[i]=='g'&&s[i+1]=='f'&&s[i+2]=='g')
           {
               c++;
           }
       }
       if(c)
       cout<<c<<endl;
       else 
       cout<<"-1"<<endl;
   }
   return 0;
}
