class Solution {
public:
    int findLHS(vector<int>& nums) {

        unordered_map<int, int> map;
        int maxi = 0;

        for(int& n : nums){
            map[n]++;
        }

        for(auto& [key, val] : map){
            if(map.find(key-1) != map.end()){
                maxi = max(maxi, val+map[key-1]);
            }
        }

        return maxi;
        
    }
};
