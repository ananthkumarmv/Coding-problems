class Solution {
public:

    static bool compare(pair<int, int> a, pair<int, int> b){
        if(a.second < b.second)
            return true;
        else if(a.second == b.second)
            return a.first > b.first;

        return false;
    }


    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> map;

        for(int& num: nums){
            map[num]++;
        }

        vector<pair<int, int>> freq;
        
        for(auto& [key, val] : map){
            freq.push_back({key, val});
        }

        sort(freq.begin(), freq.end(), compare);

        vector<int> res;

        for(auto& [f, s] : freq){
            while(s--){
                res.push_back(f);
            }
        }

        return res;
    }
};