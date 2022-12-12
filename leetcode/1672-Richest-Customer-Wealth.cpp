class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int n=accounts.size();

        int maxi=0;
        int curr;
        for(int i=0; i<n; i++){
            curr=0;
            for(int j=0; j<accounts[i].size(); j++){
                curr += accounts[i][j];
            }
            if(curr>maxi)
                maxi = curr;
        }

        return maxi;

    }
};