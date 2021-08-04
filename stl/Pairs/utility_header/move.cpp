#include <utility>    
#include <iostream>    
#include <vector>    
#include <string>  

using namespace std;

int main() {

    string s = "Hello!!";
    string s1 = "I am Anant";
    vector<string> intro;
    
    intro.push_back(s);
    
    // It moves 's1' into the intro(containing 's')
    intro.push_back(move(s1));
    
    cout<<"intro contains:";
    for(int i=0; i< intro.size();i++)
    	cout<<" "<<intro[i];
    cout<<endl;
    
    return 0;
}


