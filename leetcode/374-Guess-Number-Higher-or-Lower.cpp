/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int low = 0;
        int high = INT_MAX;

        int mid = low + (high - low) / 2;

        while(low <= high){
             
            int k = guess(mid);

            if(k == 0)
                break;
            else if(k == -1)
                high = mid-1;
            else
                low = mid + 1;

            mid = low + (high - low)/2;

        }

        return mid;
        
    }
};
