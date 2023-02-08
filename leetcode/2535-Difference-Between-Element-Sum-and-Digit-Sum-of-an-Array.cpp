class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int n = nums.size();

        int eleSum = 0;
        int digSum = 0;

        for(int i=0; i<n; i++){

            int k = nums[i];
            eleSum += k;

            while(k>0){
                digSum += k%10;
                k /= 10;
            }
        }

        return abs(eleSum - digSum);
        
    }
};
