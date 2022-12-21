class Solution {
public:
    int majorityElement(vector<int>& nums) {

        ios_base::sync_with_stdio(0); 
        cin.tie(0);

        int majorityEle = nums[0];
        int cnt = 1;

        int n = nums.size();
        
        for(int i=1; i<n; i++){
            if(majorityEle == nums[i])
                cnt++;
            else{
                cnt--;
                if(cnt == 0){
                    majorityEle = nums[i];
                    cnt++;
                }
            }
        }

        return majorityEle;
    }
};
