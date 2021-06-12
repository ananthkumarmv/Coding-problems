/* Problem
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point  of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.
Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input

First and the only line contain the integer  which denotes the position of his friend's house.

Output

Output contains a single line denoting the minimum number of steps.

Constraints


 

Sample Input
26
Sample Output
6 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%5==0){
        cout<<(n/5);
    }
    else cout<<((n/5)+1);
    return 0;
}
