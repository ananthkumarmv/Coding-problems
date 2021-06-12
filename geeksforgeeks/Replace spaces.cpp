#include <bits/stdc++.h>
using namespace std;

string replaceBlankWithdot(string str)
{
    string replaceby = ".";
    int n = 0;

    // loop till all space are replaced
    while ((n = str.find(" ", n)) != string::npos )
    {
        str.replace(n, 1, replaceby);
        n += replaceby.length();
    }
    return str;
}

int main()
{

    string urlex = "google com in";
    cout << replaceBlankWithdot(urlex) << endl;

    return 0;
}
