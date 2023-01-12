class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        bool freq[3][101] = {};

        for(auto n: nums1)
            freq[0][n] = true;

        for(auto n: nums2)
            freq[1][n] = true;

        for(auto n: nums3)
            freq[2][n] = true;

        vector<int> res;

        for(int i=1; i<=100; i++){
            if((freq[0][i] + freq[1][i] + freq[2][i]) >1)
                res.push_back(i);
        }

        return res;
        
    }
};