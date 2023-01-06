class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        map<int, string, greater<int>> rec;

        int n = heights.size();

        for(int i=0; i<n; i++){
            rec[heights[i]] = names[i];
        }

        int i = 0;
        for(auto itr: rec)
            names[i++] = itr.second;

        return names;
    }
};
