# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

""" 
A tree is balaced if for every node the difference in height of trees is not more than 1
"""


def helper(root):
    if root is None:
        return 0, True
        
    leftheight, is_left_balanced = helper(root.left)
    rightheight, is_right_balanced = helper(root.right)

    current_balanced = is_left_balanced and is_right_balanced and abs(leftheight - rightheight) <= 1
    
    current_height = max(leftheight, rightheight) + 1

    return current_height, current_balanced
    
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True

        _, ans = helper(root)
        return ans

        