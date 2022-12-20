class Solution {
public:

    int sumOfDigits(int n){

        int sum = 0;
        while(n){
            sum += n%10;
            n /= 10;
        }

        return sum;

    }

    int getLucky(string s, int k) {

        int n = s.length();

        int sum = 0;

        for(int i=0; i<n; i++){
            sum += sumOfDigits(s[i]-'a'+1);
        }

        for(int i=0; i<k-1; i++){
            sum = sumOfDigits(sum);
        }

        return sum;
        
    }
};
