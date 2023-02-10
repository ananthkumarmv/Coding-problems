class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        int i=0, j=0;

        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j])
                return nums1[i];
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }

        return -1;
        
    }
};


/*
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> set(nums1.begin(), nums1.end());

        for(int n : nums2){
            if(set.find(n) != set.end())
                return n;
        }

        return -1;
        
    }
};
*/