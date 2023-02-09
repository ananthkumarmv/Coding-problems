// O(n * log(n)) 

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {

            sort(strs.begin(), strs.end());

            string fstr = strs[0];
            string lstr = strs[strs.size()-1];

            int n = (fstr.length() < lstr.length()) ? fstr.length() : lstr.length();

            string res = "";

            for(int i=0; i<n; i++){
                if(fstr[i] == lstr[i])
                    res += fstr[i];
                else
                    break;
            }

            return res;

        }

};

// O(number_of_strings * len(min_string_length))

/*
class Solution {
public:

    static int minLength(vector<string>& strs){
        int mini = INT_MAX;

        int n = strs.size();
        int len;

        for(int i=0; i<n; i++){
            len = strs[i].length();
            if(len < mini)
                mini = len;
        }

        return mini;

    }

    string longestCommonPrefix(vector<string>& strs) {

        int minLen = minLength(strs);

        string res = "";

        for(int i=0; i<minLen; i++){

            for(string& s : strs){
                if(s[i] != strs[0][i])
                    return res;

            }
            res += strs[0][i];
        }

        return res;
        
    }
};
*/