class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
        int n = word1.size();
        vector<int> freq(26, 0);

        for(int i=0; i<n; i++){

            freq[word1[i]-'a']++;
            freq[word2[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(freq[i]>3 || freq[i]<-3)
                return false;
        }

        return true;

    }
};
