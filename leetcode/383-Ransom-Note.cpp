class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int cnt[27] = {0};

        for(char c: magazine)
            cnt[c-'a']++;
        
        for(char c: ransomNote){
            if(cnt[c-'a']<=0)
                return false;
            cnt[c-'a']--;
        }

        return true;

    }
};