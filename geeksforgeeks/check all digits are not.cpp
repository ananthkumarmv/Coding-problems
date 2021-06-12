#include <bits/stdc++.h>
using namespace std;


bool containsOnlyDigit(string str)
{
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (str.at(i) < '0' || str.at(i) > '9')
            return false;
    }
    return true;
}

int main()
{

    string num = "3452";
    if (containsOnlyDigit(num))
        cout << "string contains only digit" << endl;

    return 0;
}

