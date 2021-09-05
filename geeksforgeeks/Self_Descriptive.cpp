#include <iostream>
using namespace std;

bool isSelfDescriptiveNumber(int n){
    string s =to_string(n);
    for(int i=0;i<s.size();i++){
        char temp_char = s.at(i);

        int b=temp_char - '0';

        int count = 0;
        for(int j=0;j<s.size(); j++){
            int temp = s.at(j) - '0';

            if(temp==i){
                count++;
            }
        }

        if(count!=b)
            return false;
    }
    return true;
}


int main(){

    for(int i=0;i<1000000000;i++)
        if(isSelfDescriptiveNumber(i))
            cout<<i<<" ";

    return 0;
}
