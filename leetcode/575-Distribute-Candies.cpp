class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        unordered_set<int> mySet;

        for(int i: candyType){
            mySet.insert(i);
        }

        int n = candyType.size();
        int k = mySet.size();

        return (k > n/2)  ? n/2 : k;

    }
};
