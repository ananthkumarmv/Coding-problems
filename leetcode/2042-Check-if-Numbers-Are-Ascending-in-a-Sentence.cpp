class Solution {
public:
    bool areNumbersAscending(string s) {

        int n = s.length();

        int num = 0;
        int prev = 0;

        for(int i=0; i<n; i++){

            if(s[i] >= '0' && s[i] <= '9'){
                num = num * 10 + (s[i] - '0');
            }
            else if(num>0){
                if(prev >= num){
                    return false;
                }
                else{
                    prev = num;
                    num = 0;
                }
            }

        }

        return (num == 0) || (prev < num);

    }
};
