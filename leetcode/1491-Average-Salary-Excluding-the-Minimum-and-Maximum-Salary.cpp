class Solution {
public:
    double average(vector<int>& s) {
        
        auto it = minmax_element(s.begin(), s.end());

        return (accumulate(s.begin(), s.end(), 0.) - *it.first - *it.second)/(s.size()-2);

    }
};
