class Solution{
public:	
	
	int divisibleBy4 (string s)
	{
	    // Your Code Here
	    int num = 0;
		int len = s.length ();
		
		// if length is 1, we simply check the digit's divisibility
		if (len == 1)
		{
			num = (s[0] - '0');
			return (num % 4 == 0);
		}
	    
	    // computing the number formed by the last 2 digits
		num += (s[len - 1] - '0');
		num = (s[len - 2] - '0') * 10 + num;

		return (num % 4 == 0);
	}
};