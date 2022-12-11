class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = nums.size();
        if(n==0)
            return 0;

        unordered_map<int, int> mymap;
        int currSum = 0;
        int i=0;
        int cnt=0;

        while(i<n){
            currSum += nums[i];
            if(currSum == k)
                cnt++;
            if(mymap.find(currSum-k) != mymap.end())
                cnt += mymap[currSum-k];

            mymap[currSum] += 1;
            i++;
        }

        return cnt;
        
    }
};