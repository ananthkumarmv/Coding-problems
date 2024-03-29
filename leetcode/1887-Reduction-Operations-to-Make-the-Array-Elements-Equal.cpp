class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int res = 0;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            while(nums[i]== nums[i+1]){
                i++;
            }
            res += n - i - 1;
        }

        return res;
    }
};
