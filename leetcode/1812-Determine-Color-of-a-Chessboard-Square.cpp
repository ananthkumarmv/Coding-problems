class Solution {
public:
    bool squareIsWhite(string s) {

        int n = s[0] + s[1];
        return (n&1);
        
    }
};
