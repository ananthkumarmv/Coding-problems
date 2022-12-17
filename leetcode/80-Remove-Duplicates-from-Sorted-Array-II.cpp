class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int k = 1;
        int rep = 1;

        for(int i=0; i<n-1; i++){
            if(nums[i] != nums[i+1]){
                nums[k++] = nums[i+1];
                rep = 1;
            }
            else{
                if(nums[i] == nums[i+1] && rep==2)
                    continue;
                else{
                    nums[k++] = nums[i+1];
                    rep++;
                }
                
            }

        }

        return k;
    }
};
