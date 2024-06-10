# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def helper(root, count):
        if root is None:
            return count

        leftcount = 0
        rightcount = 0

        if root.left is not None:
            leftcount = helper(root.left, leftcount+ 1)
        
        if root.right is not None:
            rightcount = helper(root.right, rightcount+1 )

        count += max(leftcount, rightcount)
        return count


class Solution:
    
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None: 
            return 0
        count= 1
        count = helper(root, count)
        return count