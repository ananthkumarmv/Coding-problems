class Solution {
public:
    bool isPalindrome(string s) {

        string pal = "";
        int n = s.length();

        for(int i=0; i<n; i++){

            if(isalnum(s[i])){
                if(s[i]>='A' && s[i]<='Z')
                    pal += tolower(s[i]);
                else
                    pal += s[i];
            }

        }

        int l = 0;
        int r = pal.length()-1;

        while(l<r){
            if(pal[l] != pal[r])
                return false;

            l++; r--;
        }

        return true;
    }
};
