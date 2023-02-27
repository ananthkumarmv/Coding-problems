class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int cnt = 1;
        int n = nums.size();
        int k = n/3;

        int ele = nums[0];

        vector<int> res;

        for(int i=1; i<n; i++){
            if(ele == nums[i]){
                cnt++;
            }
            else{
                if(cnt > k)
                    res.push_back(ele);
                cnt = 1;
                ele = nums[i];
            }

        }

        if(cnt > k)
            res.push_back(ele);

        return res;
    }
};