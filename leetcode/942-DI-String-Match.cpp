class Solution {
public:
    vector<int> diStringMatch(string s) {

        int n = s.length();

        vector<int> res;

        int l = 0;
        int r = n;

        for(int i=0; i<=n; i++)
            res.push_back(s[i] == 'I' ? l++ : r--);

        return res;
        
    }
};
