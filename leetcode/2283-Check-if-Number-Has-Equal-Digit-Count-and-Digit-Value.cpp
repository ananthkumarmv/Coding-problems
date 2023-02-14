class Solution {
public:
    bool digitCount(string num) {

        int n = num.length();

        int freq[10] = {0};

        for(char& s : num){
            freq[s-'0']++;
        }


        for(int i=0; i<n; i++){
            if(freq[i] != (num[i]-'0'))
                return false;
        }
        return true;
    }
};
