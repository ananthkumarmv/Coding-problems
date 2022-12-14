class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();

        char c;
        for(int i = 0; i<n/2; i++){
            c = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = c;
        }
        
    }
};