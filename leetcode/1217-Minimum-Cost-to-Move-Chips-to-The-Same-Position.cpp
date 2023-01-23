class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {

        int odd = 0;
        int even = 0;

        int n = position.size();

        for(int i=0; i<n; i++){
            if(position[i]%2==1)
                odd++;
            else
                even++;
        }

        return min(odd, even);
        
    }
};
