#include<iostream>
#include<tuple>

using namespace std;



//The work of tie() is to unpack the tuple values into 
//separate variables. There are two variants of tie(), 
//with and without “ignore” , the “ignore” ignores a 
//particular tuple element and stops it from getting unpacked.


int main(){
	
	int i_val;
	char ch_val;
	float f_val;;
	
	tuple<int, char, float> tup1(20, 'g', 17.5);
	
	// Use of tie() without ignore
    tie(i_val,ch_val,f_val) = tup1;
    
    // Displaying unpacked tuple elements
    // without ignore
    cout << "The unpacked tuple values (without ignore) are : ";
    cout << i_val << " " << ch_val << " " << f_val;
    cout << endl;
    
    // Use of tie() with ignore
    // ignores char value
    tie(i_val,ignore,f_val) = tup1;
      
    // Displaying unpacked tuple elements
    // with ignore
    cout << "The unpacked tuple values (with ignore) are : ";
    cout << i_val  << " " << f_val;
    cout << endl;

	return 0;
}

