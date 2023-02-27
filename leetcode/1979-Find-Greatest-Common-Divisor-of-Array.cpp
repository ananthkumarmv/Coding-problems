class Solution {
public:

    int gcd(int maxi, int mini){
        while(maxi%mini){
            int rem = maxi%mini;
            maxi = mini;
            mini = rem;
        }

        return mini;
    }

    int findGCD(vector<int>& nums) {

        int mini = 1001;
        int maxi = 0;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(mini>nums[i])
                mini = nums[i];
            if(maxi<nums[i])
                maxi = nums[i];
        }

        return gcd(mini, maxi);
        
    }
};