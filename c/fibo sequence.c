//Program to accept a number and print Fibonacci sequence.

#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n = 9;
    cout << fib(n);
    return 0;
}
