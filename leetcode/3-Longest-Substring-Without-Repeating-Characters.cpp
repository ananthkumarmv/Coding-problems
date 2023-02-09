class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> mySet;

        int n = s.length();

        int maxi = 0;

        int i=0, j=0;

        while(j<n){

            if(mySet.find(s[j]) == mySet.end()){

                if((j-i+1) > maxi)
                    maxi = j-i+1;

                mySet.insert(s[j]);
                j++;

            }
            else{
                mySet.erase(s[i]);
                i++;
            }

        }

        return maxi;
        
    }
};