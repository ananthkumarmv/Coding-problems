class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> v;

        int top = 0, bottom = n-1;
        int left = 0, right = m-1;
        int d = 0;

        while(top<=bottom && left <= right){

            if(d == 0){
                for(int i=left; i<=right; i++)
                    v.push_back(matrix[top][i]);
                top++;
            }
            else if(d == 1){
                for(int i=top; i<=bottom; i++)
                    v.push_back(matrix[i][right]);
                right--;
            }
            else if(d == 2){
                for(int i=right; i>=left; i--)
                    v.push_back(matrix[bottom][i]);
                bottom--;
            }
            else if(d == 3){
                for(int i=bottom; i>=top; i--)
                    v.push_back(matrix[i][left]);

                left++;
            }

            d = (d+1) % 4;

        }

        return v;
    }
};