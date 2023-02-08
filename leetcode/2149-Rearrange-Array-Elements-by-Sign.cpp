class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> res(nums.size(), 0);

        int negIndex = 1, posIndex = 0;

        for(int& n : nums){
            if(n > 0){
                res[posIndex] = n;
                posIndex += 2;
            }
            else{
                res[negIndex] = n;
                negIndex += 2;
            }
        }

        return res;
        
    }
};
