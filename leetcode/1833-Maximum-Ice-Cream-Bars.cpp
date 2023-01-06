class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        int n = costs.size();

        sort(costs.begin(), costs.end());

        int bars = 0;
        int i=0;

        for(int i=0; i<n; i++){
            if((coins-costs[i]) >= 0){
                coins -= costs[i];
                bars++;
            }
            else
                break;
        }

        return bars;
        
    }
};
