class Solution {
	public:
		int setBits(int N) {
	    int c=0;
	    while(N!=0){
	    N=N&(N-1);
	    c++;
	    }
	    return c;  //return __builtin_popcount(N);
}
};
