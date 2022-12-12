class Solution {
public:
    bool halvesAreAlike(string s) {

        unordered_set<char> dict{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int i=0;
        int n = s.length();
        int mid=n/2;

        int cnt=0;

        while(i<mid){
            if(dict.find(s[i]) != dict.end())
                cnt++;
            i++;
        }

        while(i<n){
            if(dict.find(s[i]) != dict.end())
                cnt--;
            i++;
        }

        return cnt==0;
        
    }
};