class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        string res = s;

        int n = s.length();

        for(int i=0; i<n; i++){
            res[indices[i]] = s[i];
        }

        return res;

    }
};
