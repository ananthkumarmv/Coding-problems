class Solution {
public:
    int minBitFlips(int start, int goal) {

        int n = start ^ goal;
        int flips = 0;

        while(n > 0){
            flips++;
            n &= n-1;
        }

        return flips;
        
    }
};
