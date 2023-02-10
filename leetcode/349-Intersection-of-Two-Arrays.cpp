class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> set1(nums1.begin(), nums1.end());

        vector<int> res;

        for(int n : nums2){
            if(set1.find(n) != set1.end()){
                res.push_back(n);
                set1.erase(n);
            }
        }

        return res;
        
    }
};


/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        bool arr1[1001] = {false};
        bool arr2[1001] = {false};

        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i=0; i<n1; i++){
            if(arr1[nums1[i]] == false)
                arr1[nums1[i]] = true;
        }

        for(int i=0; i<n2; i++){
            if(arr2[nums2[i]] == false)
                arr2[nums2[i]] = true;
        }

        vector<int> res;

        for(int i=0; i<1001; i++){
            if(arr1[i] == true && arr2[i] == true)
                res.push_back(i);
        }

        return res;
        
    }
};
*/