class Solution {
public:
    bool isPalindrome(int n) {

        ios_base::sync_with_stdio(0); 
        cin.tie(0);
        
        if(n<0 || (n%10==0 && n!=0))
            return false;

        int rem=0;
        while(n>rem){
            rem = rem*10 + n%10;
            n /= 10;
        }

        return n == rem || n == rem/10;

    }
};