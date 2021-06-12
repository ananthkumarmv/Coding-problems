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
	
	int index=0;
	cout<<"Modifying existing elements...\n";
	while(index>=0){
		cout<<"Enter index: ";
		cin>>index;
		if(index>=0){
			cout<<"Enter value: ";
			cin>>value;
			numbers[index]=value;
		}
			
	} 
	print(numbers);

	return 0;
}
