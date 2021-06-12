#include<iostream>
#include <vector>
using namespace std;

void print(const vector<int>& my_vector){
	cout<<"Vector content: { ";
	for(int i=0; i<my_vector.size();i++)
		cout<<my_vector[i]<<" ";
	cout<<"}\n\n";
}


int main(){
	vector<int> numbers;
	int value=0;
	
	cout<<"Pushing back...\n";
	while(value>=0){
		cout<<"Enter number: ";
		cin>>value;
		if(value>=0)
			numbers.push_back(value);
	} 
	print(numbers);
	
	value=0;
	cout<<"Pushing front...\n";
	while(value>=0){
		cout<<"Enter number: ";
		cin>>value;
		if(value>=0)
			numbers.insert(numbers.begin(),value);
	} 
	print(numbers);

	return 0;
}

