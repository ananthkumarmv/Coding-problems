class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++){

            int target = -nums[i];
            int front = i+1;
            int back = n-1;

            while(front<back){
                int sum = nums[front] + nums[back];
                if(sum == target){
                    vector<int> triplet = {nums[i], nums[front], nums[back]};
                    res.push_back(triplet);

                    while((front<back) && (nums[front] == triplet[1]))
                        front++;

                    while((front<back) && (nums[back] == triplet[2]))
                        back--;
                }

                else if(sum < target)
                    front++;
                else
                    back--;
            }

            while((i < n-2) && (nums[i] == nums[i+1]))
                i++;

        }

        return res;
        
    }
};