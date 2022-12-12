class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        ios_base::sync_with_stdio(0); cin.tie(0);
        
        unordered_map<int, int> mymap;
        
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(mymap.find(target-nums[i]) != mymap.end())
                return {i, mymap[target-nums[i]]};
            
            mymap[nums[i]] = i;
        }
            
        return {};

    }
};
