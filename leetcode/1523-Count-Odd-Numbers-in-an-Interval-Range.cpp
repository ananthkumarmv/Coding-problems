class Solution {
public:
    int countOdds(int low, int high) {
        
        int cnt = (high-low)/2;
        if((high&1) || (low&1))
            return cnt+1;
        return cnt;

    }
};
