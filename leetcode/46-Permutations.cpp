class Solution {
public:

    vector<vector<int>> res;

    void permuteRecursive(vector<int> &nums, int begin=0){

        if(begin >= nums.size()){
            res.push_back(nums);
            return;
        }

        for(int i = begin; i<nums.size(); i++){
            swap(nums[begin], nums[i]);

            permuteRecursive(nums, begin+1);

            swap(nums[begin], nums[i]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        permuteRecursive(nums);

        return res;

    }
};