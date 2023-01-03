class Solution {
public:

    void reverseArr(vector<int>& nums, int l, int r){

        while(l<r){

            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;

            l++, r--;

        }

    }

    void rotate(vector<int>& nums, int k) {
        
        if(k==0)
            return;
        
        int n = nums.size();
        k = k%n;

        reverseArr(nums, 0, n-1);
        reverseArr(nums, 0, k-1);
        reverseArr(nums, k, n-1);

    }
};
