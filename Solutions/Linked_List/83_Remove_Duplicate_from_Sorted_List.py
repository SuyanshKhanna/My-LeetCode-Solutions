# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        seen = set()
        ptr = head
        while ptr is not None and ptr.next is not None:
            seen.add(ptr.val)
            if ptr.next.val in seen:
                ptr.next = ptr.next.next
            else:
                ptr = ptr.next
        return head

        #     def containsDuplicate(self, nums):
        # """
        # :type nums: List[int]
        # :rtype: bool
        # """
        # seen = set()
        # for i in nums:
        #     if i in seen:
        #         print(i ,"was found")
        #         return True
        #     else:
        #         seen.add(i)
        # return False
        
