class Solution {
public:
    char repeatedCharacter(string s) {

        bool freq[26] = {false};

        int n = s.length();

        char c;
        for(int i=0; i<n; i++){
            if(!(freq[s[i]-'a']))
                freq[s[i]-'a'] = true;
            else{
                c = s[i];
                break;
            }
            
        }

        return c;
        
    }
};
