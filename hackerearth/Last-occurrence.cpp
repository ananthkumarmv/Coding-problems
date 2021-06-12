#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==m){
            cout<<i+1;
            break;
        }
    }
    return 0;
    
}

