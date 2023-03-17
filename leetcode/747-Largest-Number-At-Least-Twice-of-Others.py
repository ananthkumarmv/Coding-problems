class Solution:
    def dominantIndex(self, nums: List[int]) -> int:

        first_max = second_max = -1
        index = 0

        for i, num in enumerate(nums):
            if first_max <= num:
                second_max = first_max
                first_max = num
                index = i
            elif second_max < num:
                second_max = num

        if first_max < 2*second_max:
            index = -1


        return index