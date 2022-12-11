class Solution {
public:
    void sortColors(vector<int>& nums) {

        ios_base::sync_with_stdio(0); 
        cin.tie(0);
        
        int low=0;
        int mid=0;
        int high = nums.size()-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1)
                mid++;
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};