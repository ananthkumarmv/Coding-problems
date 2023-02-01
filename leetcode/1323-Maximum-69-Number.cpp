class Solution {
public:
    int maximum69Number (int num) {

        int temp = num;
        int index = -1;
        int currIndex = 0;

        while(temp>0){
            if(temp%10 == 6)
                index = currIndex;

            temp /= 10;
            currIndex++;
        }

        return index == -1 ? num : num + 3 * pow(10, index);
        
    }
};
