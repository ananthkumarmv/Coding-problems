class Solution {
public:
    string reversePrefix(string word, char ch) {

        int n = word.length();

        int pos = 0;

        while(pos<n && word[pos] != ch){
            pos++;
        }

        if(pos == n)
            return word;

        reverse(word.begin(), word.begin()+pos+1);

        return word;
        
    }
};
