class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int res = 0;
        int k=1;

        for(int i: nums){
            res ^= i;
            res ^= k++;
        }

        return res;
        
    }
};
