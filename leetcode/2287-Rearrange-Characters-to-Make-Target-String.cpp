class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        int freq1[26] = {0};
        int freq2[26] = {0};

        for(char& c : s){
            freq1[c - 'a']++;
        }

        for(char& c : target){
            freq2[c - 'a']++;
        }

        int mini = 1001;

        for(int i=0; i<26; i++){
            if(freq2[i] != 0)
                mini = min(mini, freq1[i]/freq2[i]);
        }

        return mini;
        
    }
};
