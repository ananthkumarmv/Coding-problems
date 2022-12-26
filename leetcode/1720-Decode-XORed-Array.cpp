class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> arr;
        arr.push_back(first);

        int n = encoded.size();
        for(int i=0; i<n; i++){
            int x = arr[i]^encoded[i];
            arr.push_back(x);
        }

        return arr;

    }
};
