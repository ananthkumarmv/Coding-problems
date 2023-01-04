class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int> freq(26, 0);

        int n = s.size();

        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }

        n = t.size();

        char c;
        for(int i=0; i<n; i++){
            if((freq[t[i]-'a'])){
                freq[t[i]-'a']--;
            }
            else{
                c = t[i];
            }
        }
        return c;
        
    }
};
