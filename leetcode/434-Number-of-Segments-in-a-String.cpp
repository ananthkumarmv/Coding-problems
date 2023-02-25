class Solution {
public:
    int countSegments(string s) {

        int n = s.length();

        int cnt = 0;
        int k = 0;

        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                k++;
            }
            else{
                if(k>0)
                    cnt++;
                k = 0;
            }
        }

        if(k>0)
            cnt++;

        return cnt;

    }
};
