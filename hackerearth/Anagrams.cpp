#include<bits/stdc++.h>

using namespace std;


 

int main(){

    int t;

    cin>>t;

    for(int k=0;k<t;k++){

    string a,b;

    int c=0;

    cin>>a>>b;

    for(int i=0;i<a.length();i++){

        for(int j=0;j<b.length();j++){

            if(a[i]==b[j]){

                c++;

                b[j]='*';

                break;

            }

        }

    }

    cout<<(a.length()+b.length())-(2*c)<<endl;
     
    }
    return 0;

}
