class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        for(int i=0; i<m; i++)
            sort(grid[i].begin(), grid[i].end());

        int ans=0;

        for(int i=0; i<n; i++){
            int maxi=0;
            for(int j=0; j<m; j++){
                maxi = max(maxi, grid[j][i]);
            }

            ans += maxi;
        }

        return ans;
        
    }
};
