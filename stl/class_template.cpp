#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

template<class T>
struct Pair{				//struct means class here. The only difference is pubic by default in struct 
	T x,y;
	Pair(T i, T j){
		x=i, y=j;
	}
	T getFirst(){
		return x;
	}
	T getSecond(){
		return y;
	}
};

int main() {
	Pair<int> p1(10, 20), p2(40, 50);
	cout<<p1.getFirst()<<" "
		<<p2.getSecond();
    
    return 0;
}


