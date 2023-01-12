class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int maxi = 0;
        int curr = 0;

        int n = gain.size();

        for(int i=0; i<n; i++){
            curr += gain[i];
            if(curr>maxi)
                maxi = curr;
        }

        return maxi;
        
    }
};
