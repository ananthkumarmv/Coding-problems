#include<iostream>
#include <set>
using namespace std;

bool isHappy(int n) {
        
        set<int> myset;
        int val;
        int index;
        
        while(1){
            val =0;
            while(n){
                index = n%10;
                val += index*index;
                n/=10;
            }
            
            if(val == 1)
                return true;
            else if(myset.find(val) != myset.end())
                return false;
            
            myset.insert(val);
            n=val;
        }
        
        return false;
}

int main(){
	
	if(isHappy(19))
		cout<<"true";
	else cout<<"false";


    return 0;
}


