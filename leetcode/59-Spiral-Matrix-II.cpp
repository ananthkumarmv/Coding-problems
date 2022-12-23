class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> mat(n, vector<int>(n, 0));

        int val=1;

        int top = 0, bottom = n-1;
        int left = 0, right = n-1;
        int d = 0;

        while(top<=bottom && left <= right){

            if(d == 0){
                for(int i=left; i<=right; i++)
                    mat[top][i] = val++;
                top++;
            }
            else if(d == 1){
                for(int i=top; i<=bottom; i++)
                    mat[i][right] = val++;;
                right--;
            }
            else if(d == 2){
                for(int i=right; i>=left; i--)
                    mat[bottom][i] = val++;;
                bottom--;
            }
            else if(d == 3){
                for(int i=bottom; i>=top; i--)
                    mat[i][left] = val++;;

                left++;
            }

            d = (d+1) % 4;

        }
        return mat;

    }
};
