#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int max=0,min=0;
    for(int i=1;i<n;i++){
        min=min+a[i];
    }
    for(int i=0;i<n-1;i++){
        max =max+a[i];
    }
    cout<<min<<" "<<max;
}


