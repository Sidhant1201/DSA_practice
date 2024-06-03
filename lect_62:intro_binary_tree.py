from collections import deque

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def build_tree():
    data = int(input("Enter data: "))

    if data == -1:
        return None

    root = Node(data)
    print(f"Enter data to the left of {data}")
    root.left = build_tree()
    print(f"Enter data to the right of {data}")
    root.right = build_tree()

    return root



def inorder(root):
    
    if root == None:
        return
    
    if root.left:
        inorder(root.left)
    
    print(root.data, end = " ")
    
    if root.right:
        inorder(root.right)
        
        

def preorder(root):
    
    if root == None:
        return
    
    print(root.data, end = " ")
    
    if root.left:
        preorder(root.left)
    
    
    
    if root.right:
        preorder(root.right)


def levelOrderTraversal(root):
    q = deque()
    q.append(root)
    q.append(None)
    
    while(len(q)>0):
        front = q[0]
        q.popleft()
        
        if front != None:
            print(front.data, end=" ")
            if front.left:
                q.append(front.left)
            
            if front.right:
                q.append(front.right)
            
            
        else:
            print("\n")
            if len(q) > 0:
                q.append(None)
            
        
def buildFromLevelOrder():
    q = deque()
    val = int(input("Enter data for root node: "))
    if val == -1:
        return None
    root = Node(val)
    q.append(root)
    
    while(len(q)> 0):
        front = q[0]
        q.popleft()
        
        leftdata = int(input(f"enter data for left node of {front.data}:"))
        
        if leftdata != -1:
            front.left = Node(leftdata)
            q.append(front.left)
            
        rightdata = int(input(f"enter data for right node of {front.data}:"))
        
        if rightdata != -1:
            front.right = Node(rightdata)
            q.append(front.right)
    
    return root
 
def main():

    # 1,3 ,7, -1, -1, 11, -1, -1, 5, 17, -1, -1, -1,
    root = buildFromLevelOrder()
    levelOrderTraversal(root)
    # inorder(root)
    # levelOrderTraversal(root)

if __name__ == "__main__":
    main()
