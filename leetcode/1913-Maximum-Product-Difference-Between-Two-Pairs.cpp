class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for(int& n : nums){
            if(n > max1){
                max2 = max1;
                max1 = n;
            }
            else if(n > max2){
                max2 = n;
            }

            if(n < min1){
                min2 = min1;
                min1 = n;
            }
            else if(n < min2){
                min2 = n;
            }
        }

        int diff = (max1 * max2) - (min1 * min2);

        return diff;
    }
};