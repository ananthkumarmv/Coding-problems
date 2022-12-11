class Solution {
public:

    bool check(char a, char b){
        return ((a == '{' && b == '}') || (a == '(' && b == ')') ||(a == '[' && b == ']'));
    }

    bool isValid(string str) {

        ios_base::sync_with_stdio(0); 
        cin.tie(0);
        
        stack<char> s;

        int n = str.length();

        for(int i=0; i<n; i++){
            if(str[i] == '{' || str[i] == '(' ||str[i] == '['){
                s.push(str[i]);
            }

            else{
                if(s.empty())
                    return false;
                
                else if(!check(s.top(), str[i]))
                    return false;
                   
                s.pop();

            }

        }

        return s.empty();

    }
};