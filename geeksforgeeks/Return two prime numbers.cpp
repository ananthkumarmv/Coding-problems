#include<iostream>
#include<algorithm>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define z int
#define g string
#define f(i,n) for(z i=0;i<n;i++)
#define ll long long

using namespace std;


int isprime(int n){
        if(n==0 || n==1) return 0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<int> primeDivision(int N){
        // code here
        vector<int> c;
        int i,j;
        for(i=2;i<=N/2;i++){
            if(isprime(i)){
                j=N-i;
                if(isprime(j)){
                    c.push_back(i);
                    c.push_back(j);
                    break;
                }
            }
        }
        return c;
        
    }

int main() {
    FIO;
    int n;
    cin>>n;
    vector<int> p=primeDivision(n);
    for(int i=0;i<p.size();i++){
    	cout<<p.at(i)<<" ";
	}
    return 0;
}


