#include<iostream>
using namespace std;


void makeThemOne(int r, int c, int ar[]){
    int ar[r][c]={0}, ac[r][c]={0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 1){
                ar[i] = 1, ac[j] = 1;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){

            if(a[i] == 1){
                ar[i][j] = 1;
            }

            if(a[j] == 1){
                ac[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
    
int main(){
	int r, c;
	cin>>r>>c;
	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ar[i][j];
		}
	}
	makeThemOne(r,c,ar);
	return 0;
}

