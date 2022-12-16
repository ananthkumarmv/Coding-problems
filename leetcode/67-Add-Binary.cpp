class Solution {
public:
    string addBinary(string a, string b) {
        
        string res = "";
        
        int sum, carry=0;

        int i = a.length()-1;
        int j = b.length()-1;
        while(i>=0 || j>=0){

            sum = carry;
            if(i>=0){
                sum += a[i] - '0';
                i--;
            }

            if(j>=0){
                sum += b[j] - '0';
                j--;
            }

            res = char((sum%2)+'0') + res;
            carry = sum/2;
        }

        if(carry == 1)
            res = '1'+res;

        return res;

    }
};
