# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def helper(root):
    if root is None:
        return 0, 0

    left = helper(root.left)
    right = helper(root.right)

    op1 = left[0]
    op2 = right[0]
    op3 = left[1] + right[1]

    ans = (max(max(op1, op2), op3), max(left[1], right[1])+ 1)
    return ans

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        count = helper(root)
        return count[0]