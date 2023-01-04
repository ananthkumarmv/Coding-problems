class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        if(tasks.size()==1)
            return -1;

        unordered_map<int, int> mySet;

        for(int i: tasks)
            mySet[i]++;

        int cnt=0;
        int freq;
        for(auto it: mySet){
            freq = it.second;
            if(freq==1)
                return -1;

            cnt += (freq+2)/3;
            
        }

        return cnt;
        
    }
};
