class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0); 
        cin.tie(0);

        unordered_set<int> myset;
        for (auto& n : nums) {
            if (myset.find(n) != myset.end()) {
                return true;
            }
            myset.insert(n);
        }
        return false;

    }
};