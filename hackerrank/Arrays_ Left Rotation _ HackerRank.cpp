#include<iostream>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(d>n) d%=n;
    for(int i=0;i<n;i++){
        cout<<a[(d+i)%n]<<" ";
    }
    return 0;
}

