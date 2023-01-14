class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        int n = s.length();

        int arr[26] = {0};

        for(int i=0; i<n; i++)
            arr[s[i]-'a']++;

        for(int i=0; i<n; i++){
            arr[t[i]-'a']--;
            if(arr[t[i]-'a']<0)
                return false;
        }

        return true;
        
    }
};
