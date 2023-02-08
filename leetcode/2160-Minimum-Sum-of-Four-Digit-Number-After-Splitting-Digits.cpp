class Solution {
public:
    int minimumSum(int num) {

        vector<int> v(4, 0);

        for(int i=0; i<4; i++){
            v[i] = num%10;
            num /= 10;
        }

        sort(v.begin(), v.end());
        int sum = (v[0] + v[1]) * 10 + v[2] + v[3];

        return sum;
    }
};
