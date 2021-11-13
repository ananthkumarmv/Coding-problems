/*

A race is going on in which several stones are placed on a road. A bucket is placed at the starting point of the race, 
which is 5 units away from the first stone. The other stones are 3 units apart from each other and lie straight in a line 
one after another. I.e., the distance between 1st and 2nd stone is 3 units, between 3rd and 4th stone, it is also 3 units and so on. 
The competitor starts from the bucket, picks up the nearest stone, goes back and puts that stone into the bucket, then runs again to 
collect the next nearest stone, runs back, and puts it in the bucket. This way the process is continued till all the stones have been 
put into the bucket. Now if there are n stones lying on the ground, 
how much distance will be covered by the competitor in completing the whole process.


Distance run by competitor to pick first stone = 2 * 5 
Distance run by competitor to pick second stone = 2(5 + 3)
Distance run by competitor to pick third stone = 2(5 + 3 + 3) 
= 2(5 + (2 * 3))
Distance run by competitor to pick fourth stone = 2(5 + 3 + 3 + 3) 
= 2(5 + (3 * 3))
Distance run by competitor to pick fifth stone = 2(5 + 3 + 3 + 3 + 3) 
= 2(5 + (4 * 3)) 
. 
. 
.
Distance run by competitor to pick n-th stone = 2(5 + 3 + 3 + ……. + (n-1) times ) 
= 2(5 + (n-1) *3)
So total distance run by competitor = sum of all the above distances 
= (2 * 5) + 2(5 + 3) + 2(5 + (2 * 3)) + 2(5 + (3 * 3)) + ………….. + 2(5 + (n-1) *3) 
= 2(5 + (5 + 3) + (5 + (2 * 3)) + (5 + (3 * 3)) + ………………. + (5 + (n-1) * 3) 
= 2(5 + 5 + 5 …… + n times) + (3 + (2 * 3) + (3 * 3) + ……… + (n-1) * 3) 
= 2(5n + 3(1 + 2 + 3 + ……………. + n-1)) 
= 2(5n + 3/2[(n-1)*(n-1 + 1)] ) 
= 2(5n + 3/2[(n-1)*n]) 
= 2(5n + 3/2(n2 – n)) 
= 10n + 3*n2 – 3*n 
= 3*n2 + 7*n 
= n*((3 * n) + 7)

*/


#include<iostream>

using namespace std;

int find_distance(int n){
	return n*((n * 3)+ 7);
}


int main(){
	int n=5;
	
	cout<<"Distance = "<<find_distance(n);

    return 0;
}


