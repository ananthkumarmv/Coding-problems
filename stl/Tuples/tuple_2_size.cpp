#include<iostream>
#include<tuple>

// tuple_size :- It returns the number of elements present in the tuple.

using namespace std;

int main(){
	
	tuple<char, int, float> geek(20, 'g', 17.5);
	
	// Use of size to find tuple_size of tuple
	cout<<"The size of tuple is : ";
	cout<<tuple_size<decltype(geek)>::value<<endl;
	

	return 0;
}

