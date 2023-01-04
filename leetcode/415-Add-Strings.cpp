class Solution {
public:
    string addStrings(string num1, string num2) {

        string res;

        int m = num1.size()-1;
        int n = num2.size()-1;

        int sum = 0;

        while(m>=0 || n>=0 || sum > 0){

            if(m>=0){
                sum += num1[m] - '0';
                m--;
            }
            if(n>=0){
                sum += num2[n] - '0';
                n--;
            }

            res = char(sum%10 + '0') + res;
            sum /= 10;

        }

        return res;
        
    }
};
