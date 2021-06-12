class Solution
{
  public:
    string modify (string s)
    {
        string s2="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                s2+=s[i];
            }
        }
        return s2;
    }
};
