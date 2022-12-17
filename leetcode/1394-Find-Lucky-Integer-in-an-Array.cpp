class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int, int> freq;
        int max = INT_MIN;

        for(int n : arr){
            freq[n]++;
        }

        for(auto ele : freq){
            if(ele.first == ele.second)
                if(ele.first > max)
                    max = ele.first;
        }

        return max == INT_MIN ? -1 : max;

    }
};
