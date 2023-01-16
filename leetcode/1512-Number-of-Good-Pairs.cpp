class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int, int> cnt;

        int n = nums.size();

        int res = 0;

        for(int i=0; i<n; i++){
            res += cnt[nums[i]]++;
        }

        return res;
        
    }
};
