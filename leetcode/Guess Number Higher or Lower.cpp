class Solution {
    
    int bsearch(int low, int high)
    {        
        int mid = low + (high-low) / 2; 
        int ret = guess(mid);
        
        if(ret == 0) return mid;
        else if(ret == -1) return bsearch(low, mid);
        else return bsearch(mid + 1, high);
    }
public:
    int guessNumber(int n) {
        return bsearch(1, n);
    }
};

