class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high){

        if (low >= high) 
            return;

        int size = high - low + 1;

        vector<int> temp(size, 0);

        int l = low;
        int r = mid+1;
        int k = 0;

        while(l<=mid && r<=high)
            temp[k++] = nums[l]<nums[r] ? nums[l++] : nums[r++];
        
        while(l<=mid)
            temp[k++] = nums[l++];
        
        while(r<=high)
            temp[k++] = nums[r++];

        for(int i=low, k=0; i<=high; i++, k++)
            nums[i] = temp[k];
        
    }

    void mergeSort(vector<int>& nums, int low, int high){

        if (low >= high)   
            return;             

        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
        
    }

    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size()-1);
        return nums;
        
    }
};