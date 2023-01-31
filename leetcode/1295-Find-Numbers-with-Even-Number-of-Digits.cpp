class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ans = 0;

        for(auto n: nums){

            int k = log10(n)+1;
            ans += (k%2 == 0);
        }

        return ans;
        
    }
};
