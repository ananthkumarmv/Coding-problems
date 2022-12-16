class Solution {
public:
    int subtractProductAndSum(int n) {

        int p=1, sum=0;

        while(n>0){
            p *= n%10;
            sum += n%10;
            n /= 10;
        }

        return (p-sum);
        
    }
};
