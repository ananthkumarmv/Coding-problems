#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "An  an th kuma r";
 
    int l = s.length(); 
 
    int c
        = count(s.begin(), s.end(), ' ');
 
    remove(s.begin(), s.end(), ' ');
 
    s.resize(l - c); 
 
    cout <<s;
 
    return 0;
}

