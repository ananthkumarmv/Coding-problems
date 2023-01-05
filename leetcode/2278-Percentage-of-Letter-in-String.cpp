class Solution {
public:
    int percentageLetter(string s, char letter) {

        int n = s.length();

        int cnt = 0;
        for(char c: s)
            if(c == letter)
                cnt++;

        
        return cnt*100/n;
        
    }
};
