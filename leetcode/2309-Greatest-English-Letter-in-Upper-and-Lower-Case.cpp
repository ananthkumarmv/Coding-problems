class Solution {
public:
    string greatestLetter(string s) {

        int n = s.length();

        if(n == 0 || n == 1)
            return "";

        bool freqLower[26] = {false};
        bool freqUpper[26] = {false};

        for(int i=0; i<n; i++){

            if(s[i] >= 'a' && s[i] <= 'z')
                freqLower[s[i]-'a'] = true;

            else
                freqUpper[s[i]-'A'] = true;

        }

        string res = "";
        
        for(int i=25; i>=0; i--){
            if(freqLower[i] && freqUpper[i]){
                res += char('A'+i);
                break;
            }
                
        }

        return res;

    }
};
