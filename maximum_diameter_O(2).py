# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def helper(root):
        if root is None:
            return 0


        leftcount = helper(root.left)
        
        rightcount = helper(root.right)

        ans = max(leftcount, rightcount)+1
        return ans

def findDepth(root):
    if root is None:
        return 0
    
    op1 = findDepth(root.left)
    op2 = findDepth(root.right)
    op3 = helper(root.left)+ helper(root.right)
    return max(max(op1, op2), op3)


    
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0

        count = findDepth(root)
        return count
    
#time complexity is O(n^2) as O(diameter * height) for all nodes. 