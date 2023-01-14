class Solution {
public:
    int mySqrt(int x) {

        long int low = 0;
        long int high = x;

        long int mid;
        int ans;

        while(low<=high){
            mid = low + (high-low)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid>x){
                high = mid-1;
            }
            else{
                ans = mid;
                low = mid+1;
            }
                
        }
        return ans;
        
    }
};
