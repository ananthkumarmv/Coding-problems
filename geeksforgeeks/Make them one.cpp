/* Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Example 1:

Input:
r= 2, c = 2
mat[][] = {{1, 0}
           {0, 0}}
Output:
1 1
1 0

Example 2:

Input:
r = 2, c = 3
mat[][]= {{0, 0, 0} 
          {0, 0, 1}}
Output:
0 0 1 
1 1 1 */







//User function Template for C++

//Back-end complete function Template for C++

/* Funtion to make all rows and colums one
*  r : number of rows
*  c : number of columns
*  Note : arr is declared globally, you can
*  use arr in your function
*/
void makeThemOne(int r, int c){
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 1){
                ar[i] = 1, ac[j] = 1;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){

            if(ar[i] == 1){
                a[i][j] = 1;
            }

            if(ac[j] == 1){
                a[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    memset(ac, 0, sizeof(ac));
    memset(ar, 0, sizeof(ar));
    
    
}

