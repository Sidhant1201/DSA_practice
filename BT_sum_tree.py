def helper(root):
    if root is None:
        return True, 0
    
    if root.left is None and root.right is None:
        return True, root.data
        
    leftbool, leftval = helper(root.left)
    rightbool, rightval = helper(root.right)
    
    if leftbool and rightbool and root.data == (leftval+ rightval):
        return True, leftval+ rightval+ root.data
    
    else:
        return False, root.data + leftval + rightval
    
class Solution:
    def isSumTree(self,root):
        # Code here
        if root is None:
            return False
            
        ans, sum = helper(root)
            
        return ans
