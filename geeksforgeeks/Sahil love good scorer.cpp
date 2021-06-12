#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int w,g;
	    int sa=0,sb=0;
	    cin>>w>>g;
	    int a[w],b[g];
	    for(int i=0;i<w;i++){
	        cin>>a[i];
	        sa+=a[i];
	    }
	    for(int i=0;i<g;i++){
	        cin>>b[i];
	        sb+=b[i];
	    }
	    cout<<(sa>sb?"C1":"C2");
	    cout<<endl;
	}
	return 0;
}
