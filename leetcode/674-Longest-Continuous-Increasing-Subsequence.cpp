class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        int n = nums.size();

        if(n == 1)
            return 1;

        int maxi = 1;
        int l = 0, r = 1;

        while(r<n){
            if(nums[r-1] < nums[r])
                maxi = max(maxi, r-l+1);
            else
                l = r;

            r++;
        }

        return maxi;
        
    }
};
