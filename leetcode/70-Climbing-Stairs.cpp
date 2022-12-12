class Solution {
public:
    int climbStairs(int n) {

        ios_base::sync_with_stdio(0); cin.tie(0);
        
        int a, b, c;
        a = 0;
        b = 1;

        for(int i=1; i<=n; i++){
            c = a+b;
            a=b;
            b=c;
        }

        return c;

    }
};