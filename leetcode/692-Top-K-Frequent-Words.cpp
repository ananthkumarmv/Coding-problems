class Solution {
public:

    static bool comp(pair<string, int> a, pair<string, int> b){
        if(a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;

        int n = words.size();

        for(string str: words){
            mp[str]++;
        }

        vector<pair<string, int>> v;

        for(auto& [key, val] : mp)
            v.push_back({key, val});

        sort(v.begin(), v.end(), comp);

        vector<string> res;

        for(int i=0; i<k; i++)
            res.push_back(v[i].first);

        return res;
        
    }
};