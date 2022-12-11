class Solution {
public:
    int singleNumber(vector<int>& nums) {

        ios_base::sync_with_stdio(0); cin.tie(0);

        int n = nums.size();

        int m = nums[0];

        for(int i=1; i<n; i++){
            m ^= nums[i];
        }
        
        return m;
    }
};