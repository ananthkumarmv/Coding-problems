class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int res = 0;
        int n = jewels.length();

        for(int i=0; i<n; i++){
            res += count(stones.begin(), stones.end(), jewels[i]);
        }

        return res;

    }
};
