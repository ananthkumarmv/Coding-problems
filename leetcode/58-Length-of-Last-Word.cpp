class Solution {
public:
    int lengthOfLastWord(string s) {

        int n = s.length()-1;

        int len = 0;

        while(s[n] == ' '){
            n--;
        }

        for(int i=n; i>=0; i--){
            if(s[i] != ' ')
                len++;
            else
                break;
        }

        return len;
        
    }
};
