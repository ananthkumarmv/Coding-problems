class Solution {
public:
    bool checkRecord(string s) {
        
        int n = s.length();

        int lcnt = 0;
        int acnt = 0;

        for(int i=0; i<n; i++){

            if(s[i] == 'A'){
                acnt++;
                lcnt = 0;
            }
            else if(s[i] == 'L')
                lcnt++;
            else
                lcnt = 0;

            if(lcnt>=3 || acnt > 1)
                return false;

        }

        return true;

    }
};
