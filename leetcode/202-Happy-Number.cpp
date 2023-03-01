class Solution {
public:
    bool isHappy(int n) {

        set<int> mySet;

        int val, rem;

        while(true){
            val = 0;
            while(n>0){
                rem = n%10;
                val += rem*rem;
                n /= 10;
            }

            if(val == 1)
                return true;
                
            if(mySet.find(val) != mySet.end())
                return false;

            mySet.insert(val);
            n = val;
        }

        return false;
        
    }
};
