class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        map<int, int> freq;

        for(int i: nums)
            if(i%2 == 0)
                freq[i]++;

        int ans=0, maxi = INT_MIN;

        for(auto i: freq){
            if(i.second > maxi){
                ans = i.first;
                maxi = i.second;
            }
        }

        return maxi == INT_MIN ? -1 : ans;
            
    }
};
