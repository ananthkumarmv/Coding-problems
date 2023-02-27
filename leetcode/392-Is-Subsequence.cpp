class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n = s.length(), m = t.length();

        int i=0, j=0;
        while(i<m){
            if(t[i] == s[j])
                j++;
            
            i++;
        }

        return j==n;
        
    }
};
