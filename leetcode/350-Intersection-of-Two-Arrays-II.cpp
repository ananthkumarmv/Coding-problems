class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> map;

        for(int& n : nums1){
            map[n]++;
        }

        vector<int> res;

        for(int& n : nums2){
            if((map.find(n) != map.end()) && (map[n]>0)){
                res.push_back(n);
                map[n]--;
            }
        }

        return res;
        
    }
};
