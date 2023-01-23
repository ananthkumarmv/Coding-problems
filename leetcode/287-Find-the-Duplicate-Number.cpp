class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int H = nums[0];
        int T = nums[0];

        do{
            T = nums[T];
            H = nums[nums[H]];
        }while(H != T);

        H = nums[0];

        while(H != T){
            T = nums[T];
            H = nums[H];
        }

        return T;

    }
};

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
        
//         while(nums[0] != nums[nums[0]]){
//             swap(nums[0], nums[nums[0]]);
//         }

//         return nums[0];

//     }
// };