class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_set<int> mySet;

        for(int i : nums){
            if(mySet.find(i) != mySet.end())
                return i;
            mySet.insert(i);
        }

        return -1;
    }
};
