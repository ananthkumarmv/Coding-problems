class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> st;
        vector<int> res;

        int n = temperatures.size()-1;

        for(int i=n; i>=0; i--){

            if(st.empty()){
                st.push(i);
                res.push_back(0);
            }
            else{
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }

                if(st.empty()){
                    st.push(i);
                    res.push_back(0);
                }

                else{
                    res.push_back(st.top() - i);
                    st.push(i);
                }

            }
            
        }

        reverse(res.begin(), res.end());

        return res;

    }
};
