class Solution {
public:
    string convertToBase7(int num) {

        if(num == 0)
            return "0";

        string res = "";

        bool s = false;

        if(num<0){
            num *= -1;
            s = true;
        }

        while(num>0){
            res = char(num%7 + '0') + res;
            num /= 7;
        }

        if(s)
            res = '-' + res;

        return res;
        
    }
};
