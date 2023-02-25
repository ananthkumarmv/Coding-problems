class Solution {
public:
    int findComplement(int num) {

        int ans = 0;
        unsigned pow = 1;
        while(num>0){
            if(num%2 == 0){
                ans = ans + pow;
            }
            pow *= 2;
            num /= 2;
        }

        return ans;
        
    }
};
