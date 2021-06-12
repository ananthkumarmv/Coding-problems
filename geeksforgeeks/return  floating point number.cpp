#include <bits/stdc++.h> 
using namespace std; 

string returnFloatingPart(string str) 
{ 
    int pos = str.find("."); 
    if (pos == string::npos) 
        return ""; 
    else{
    	cout<<str.substr(pos + 1)<<" "<<pos<<endl;
    	return str.substr(pos + 1); 
	}
        
} 


int main() {
	string fnum = "23.347892"; 
    cout << "Floating part is : " << returnFloatingPart(fnum)  
         << endl; 
         
         
         
    float f=254.74563;
	int int_part = (int)f;
	float fractional = round(f*100)/100 - int_part;
	int fractional_part_in_integer = (int)(fractional*100);
	
	printf("%d, %d\n ", int_part, fractional_part_in_integer);



	double value = 1.234;
	double ipart;
	double frac = modf(value, &ipart);
	cout<<frac;
	
	
	
	char fp[30];          
    int fraction;         
    float fr = 254.73;    

    sprintf ( fr, "%.2f", fr);
    sscanf ( fp, "%*d.%d", &fraction);
    printf ( "%d\n", fraction);

    return 0; 
	
}

