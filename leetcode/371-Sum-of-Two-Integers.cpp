class Solution {
public:
    int getSum(int a, int b) {

        while(b != 0){
            int carry = (unsigned)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }

        return a;
        
    }
};
