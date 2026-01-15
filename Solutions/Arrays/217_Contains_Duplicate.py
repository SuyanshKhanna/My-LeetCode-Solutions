class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        seen = set()
        for i in nums:
            if i in seen:
                print(i ,"was found")
                return True
            else:
                seen.add(i)
        return False
        
