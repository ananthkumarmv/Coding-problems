/*#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n 
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    
    while (n) {
        count += n & 1;
        n/=2;
    }
    return count;
}

Program to test function countSetBits 
int main()
{
    int i;
    //cout<<(1&1);
    cin>>i;
    
    cout << countSetBits(i);
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

// recursive function to count set bits
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}

// driver code
int main()
{
    // get value from user
    int n = 9;

    // function calling
    cout << countSetBits(n);

    return 0;
}

/*// C++ program to demonstrate __builtin_popcount()
#include <iostream>
using namespace std;
int main()
{
    cout << __builtin_popcount(4) << endl;
    cout << __builtin_popcount(15);

    return 0;
}*/
