# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head):
        temp = head
        counter = 0
        while temp is not None:
            counter += 1
            temp = temp.next

        # works in both cases
        # (middle element will be (counter // 2) + 1, index will be -1)
        middleInd = counter // 2

        temp = head
        for i in range(middleInd):
            temp = temp.next

        return temp
