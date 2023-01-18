class Solution {
public:

    int reverse(int n){
        int ans=0;
        while(n){
            ans = ans*10 + n%10;
            n /=10;
        }
        return ans;
    }

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        
        for(int n: nums)
            seen.insert(reverse(n));

        return seen.size();
        
    }
};
