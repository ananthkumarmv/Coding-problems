class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> map(101, 0);

        for(auto h: heights)
            map[h]++;

        int i=1, j=0;
        int ans=0;

        while(i<101){
            if(map[i] == 0){
                i++;
            }
            else{
                if(heights[j] != i){
                    ans++;
                }
                j++;
                map[i]--;
            }

        }

        return ans;
        
    }
};
