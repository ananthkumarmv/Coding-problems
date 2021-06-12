#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1) cout<<"2";
    else if(n==2) cout<<"1";
    else cout<<"0";
    return 0;
}

