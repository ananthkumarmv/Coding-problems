class Solution {
public:
    int firstUniqChar(string s) {

        int freq[26] = {0};

        for(char c: s){
            freq[c-'a']++;
        } 

        int n = s.length();

        for(int i=0; i<n; i++){
            if(freq[s[i]-'a'] == 1)
                return i;
        }

        return -1;
        
    }
};
