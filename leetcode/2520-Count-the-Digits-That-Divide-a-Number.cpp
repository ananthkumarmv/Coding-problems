class Solution {
public:
    int countDigits(int num) {

        int temp = num;
        int cnt=0;

        while(temp>0){
            if(num%(temp%10) == 0)
                cnt++;
            
            temp /= 10;
        }

        return cnt;
        
    }
};
