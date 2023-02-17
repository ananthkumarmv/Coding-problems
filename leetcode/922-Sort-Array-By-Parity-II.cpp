class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums){

        int n = nums.size();

        int j = 1;

        for(int i=0; i<n; i += 2){
            if(nums[i]%2){
                while(nums[j]%2)
                    j += 2;

                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }

        return nums;
        
    }
};
