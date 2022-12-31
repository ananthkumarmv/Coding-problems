class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int> odd, even;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(i&1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        int k=0;
        for(int i: even){
            nums[k] = i;
            k += 2;
        }

        k = 1;
        for(int i: odd){
            nums[k] = i;
            k += 2;
        }

        return nums;

    }
};
