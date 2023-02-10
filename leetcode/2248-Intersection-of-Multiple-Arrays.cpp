class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        map<int, int> map1;

        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<nums[i].size(); j++){
                map1[nums[i][j]]++;
            }
        }

        vector<int> res;

        for(auto& [key, val] : map1){
            if(val == n){
                res.push_back(key);
            }
        }

        return res;
        
    }
};
