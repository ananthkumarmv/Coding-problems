class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int n = num.size()-1;

        while(k>0 && n>=0){
            int val = num[n] + k;
            num[n] = val%10;

            k = val/10;
            n--;
        }

        while(k>0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }

        return num;
        
    }
};
