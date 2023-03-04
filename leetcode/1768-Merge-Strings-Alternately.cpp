class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string res = "";

        int n1 = word1.length();
        int n2 = word2.length();

        int i = 0;
        int j = 0;

        while(i<n1 || j<n2){

            if(i<n1){
                res += word1[i++];
            }
            if(j<n2){
                res += word2[j++];
            }

        }

        return res;
        
    }
};
