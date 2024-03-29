class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long max1, max2, max3;
        max1 = max2 = max3 = LONG_MIN;

        for(int& n : nums){

            if(n == max1 || n == max2 || n == max3)
                continue;

            if(max1<n){
                max3 = max2;
                max2 = max1;
                max1 = n;
            }
            else if(max2<n){
                max3 = max2;
                max2 = n;
            }
            else if(max3<n){
                max3 = n;
            }
        }

        return max3 == LONG_MIN ? max1 : max3;
        
    }
};
