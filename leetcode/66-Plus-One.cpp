class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        int rem=1;

        for(int i=n-1; i>=0; i--){

            rem += digits[i];
            digits[i] = rem%10;
            rem /=10;

        }

        while(rem>0){
            digits.insert(digits.begin(), rem%10);
            rem/=10;
        }

        return digits;
    }
};
