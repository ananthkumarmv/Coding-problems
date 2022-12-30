class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """

        if n<1:
            return False
        else:
            return not (n&(n-1))
