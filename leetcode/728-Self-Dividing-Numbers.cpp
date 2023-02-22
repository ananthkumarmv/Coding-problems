class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> res;

        while(left<=right){
            int n = left;
            bool flag = true;
            while(n>0){
                int r = n%10;
                if(r == 0 || left%r != 0){
                    flag = false;
                    break;
                }
                n /= 10;
            }
            if(flag)
                res.push_back(left);

            left++;
        }

        return res;
        
    }
};
