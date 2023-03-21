class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int n = nums.size();
        long res = 0;
        int cnt = 0;

        for(int i=0; i<n; i++){
            while(i<n && nums[i]==0){
                i++;
                res += ++cnt;
            }
            
            cnt = 0;
            
        }
        
        return res;
    }
};
