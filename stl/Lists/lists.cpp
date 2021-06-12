#include<iostream>
#include<list>

using namespace std;


void print(const list<int>& my_list){
	cout<<"List content: { ";
	for (auto const &i: my_list) {
        cout << i <<" ";
    }
	cout<<"}\n\n";
}



int main(){
	list<int> numbers;
	int value=0,index=0;
	cout<<"Pushing back...\n";
	while(value>=0){
		cout<<"Enter number: ";
		cin>>value;
		if(value>=0) 
			numbers.push_back(value);
	}
	print(numbers);
	
	
	cout<<"pushing front..\n";
	value=0;
	while(value>=0){
		cout<<"Enter number: ";
		cin>>value;
		if(value>=0) 
			numbers.push_front(value); // we can also use numbers.insert(numbers.begin(),value);
	}
	print(numbers);
	return 0;
}
