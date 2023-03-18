class Solution {
public:
    bool judgeCircle(string moves) {

        int h = 0;
        int v = 0;

        int n = moves.size();

        for(int i=0; i<n; i++){
            if(moves[i] == 'L' || moves[i] == 'R'){
                moves[i] == 'L' ? h-- : h++;
            }
            else{
                moves[i] == 'D' ? v-- : v++;
            }
        }

        return (h==0 && v==0);
        
    }
};