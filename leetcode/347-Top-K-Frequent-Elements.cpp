class Solution {
public:

    static bool cmp(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(int i: nums)
            freq[i]++;

        vector<pair<int, int>> res;

        for(auto [first, second]: freq){
            res.push_back({first, second});
        }

        sort(res.begin(), res.end(), cmp);

        vector<int> ans;

        for(int i=0; i<k; i++)
            ans.push_back(res[i].first);

        return ans;
        
    }
};