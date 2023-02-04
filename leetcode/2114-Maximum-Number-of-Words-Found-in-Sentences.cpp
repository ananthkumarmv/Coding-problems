class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int n = sentences.size();

        int maxi = 0;

        for(int i=0; i<n; i++){
            int k = count(sentences[i].begin(), sentences[i].end(), ' ') + 1;

            if(k>maxi)
                maxi = k;
        }

        return maxi;
        
    }
};
