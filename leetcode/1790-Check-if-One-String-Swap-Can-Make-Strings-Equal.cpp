class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int n = s1.length();

        int i=0;
        int cnt = 0;

        int arr[26] = {0};

        while(i<n){

            arr[s1[i] - 'a']++;
            arr[s2[i] - 'a']--;

            if(s1[i] != s2[i])
                cnt++;
            if(cnt > 2)
                return false;

            i++;
        }

        for(int i=0; i<26; i++)
            if(arr[i] != 0)
                return false;

        return cnt <= 2;
        
    }
};
