class Solution {
public:

    static bool compare(pair<char, int> a, pair<char, int> b){
        return a.second > b.second;
    }

    string frequencySort(string s) {

        unordered_map<char, int> map;

        for(char& c : s){
            map[c]++;
        }

        vector<pair<char, int>> freq;
        
        for(auto& [key, val] : map){
            freq.push_back({key, val});
        }

        sort(freq.begin(), freq.end(), compare);

        string res = "";

        for(auto& [f, s] : freq){
            while(s--){
                res += f;
            }
        }

        return res;
        
    }
};