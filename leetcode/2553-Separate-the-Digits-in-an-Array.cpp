class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> res;

        int n = nums.size();

        for(int i=0; i<n; i++){
            string num = to_string(nums[i]);
            for(int j=0; j<num.length(); j++){
                res.push_back(num[j]-'0');
            }
        }

        return res;
        
    }
};
