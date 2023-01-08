class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        if(accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0))
            return -1;

        int n = gas.size();

        int ans = 0;
        int remaining_gas = 0;
        
        for(int i=0; i<n; i++){

            remaining_gas += gas[i] - cost[i];
            if(remaining_gas < 0){
                ans = i+1;
                remaining_gas = 0;
            }

        }

        return ans;
        
    }
};
