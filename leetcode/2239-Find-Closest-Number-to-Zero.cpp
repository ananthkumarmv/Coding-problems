class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int mini = 0;

        int n = nums.size();

        for(int i=1; i<n; i++){
            if(abs(nums[i]) <= abs(nums[mini]))
                if(abs(nums[i]) == abs(nums[mini])){
                    if(nums[i]>nums[mini])
                        mini = i;
                }
                else{
                    mini = i;
                }
        }

        return nums[mini];
        
    }
};
