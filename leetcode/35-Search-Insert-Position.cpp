class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int high = nums.size()-1;
        int low = 0;

        int mid;

        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                high = mid-1;
            }
                
            else
                low = mid+1;
        }

        if(target>nums[mid])
            return mid+1;
        else
            return mid;
        
    }
};
