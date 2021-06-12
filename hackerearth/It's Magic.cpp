/*Sussutu is a world-renowned magician. And recently, he was blessed with the power to remove EXACTLY ONE element from an array.

Given, an array A (index starting from 0) with N elements. Now, Sussutu CAN remove only that element which makes the sum of ALL the remaining elements exactly divisible by 7.

Throughout his life, Sussutu was so busy with magic that he could never get along with maths. Your task is to help Sussutu find the first array index of the smallest element he CAN remove.

 

Input:

The first line contains a single integer N.

Next line contains N space separated integers Ak , 0 < k < N.

 

Output:

Print a single line containing one integer, the first array index of the smallest element he CAN remove, and -1 if there is no such element that he can remove!*/
#include <iostream>

using namespace std;


 

int main()

{

    long long int n,sum=0,pos=-1;

    cin>>n;

    long long int a[n],min=1000000001;

    for(long long int i=0;i<n;i++)

    {

        cin>>a[i];

        sum+=a[i];

    }

    for(long long int i=0;i<n;i++)

    {

        if((sum-a[i])%7==0)

        {

            if(a[i]<min)

            {

            min=a[i];

            pos=i;

            }

        }

    }

    (pos==-1)?cout<<"-1":cout<<pos;

}


