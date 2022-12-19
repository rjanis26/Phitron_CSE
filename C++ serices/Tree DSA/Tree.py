 

# class TreeNode:
#     def __init__(self, data = None, left = None, right = None):
#         self. data= data
#         self.left = left
#         self.right = right
    
# def inorderTraversal(root):
#     if root is None:
#         return
#     inorderTraversal(root.left)
#     print(root.data, end=' ')
#     inorderTraversal(root.right)

# def preorderTraversal(root):
#     if root is None: return
#     print(root.data, end = ' ')
#     preorderTraversal(root.left)
#     preorderTraversal(root.right)


# def postorderTraversal(root):
#     if root is None: return
#     postorderTraversal(root.left)
#     postorderTraversal(root.right)
#     print(root.data)

 

# if __name__ == '__main__':
#     root = TreeNode(1)
#     root.left = TreeNode(2)
#     root.right = TreeNode(3)
#     root.right.left = TreeNode(4);
#     root.right.left = TreeNode(5)
#     root.right.right = TreeNode(6)
#     root.right.left.left = TreeNode(7)
#     root.right.left.right = TreeNode(8)

#     inorderTraversal(root)



# class Node:
#     def __init__(self, data = None, left= None, right = None):
#         self.data = data
#         self.left = None
#         self.right = None


# def isSameTree(root1, root2):
#     if root1 is None and root2 is None:
#         return True
#     if root1 is None or root2 is None:
#         return False
    
#     return (root1.data == root2.data) and isSameTree(root1.left, root2.left) and isSameTree(root1.right, root2.right)

 
# if __name__ == '__main__':
#     x = Node(15)
#     x.left = Node(10)
#     x.right = Node(20)
#     x.left.left = Node(8)
#     x.left.right = Node(12)
#     x.right.left = Node(16)
#     x.right.right = Node(25)
 
#     # construct the second tree
#     y = Node(15)
#     y.left = Node(10)
#     y.right = Node(20)
#     y.left.left = Node(8)
#     y.left.right = Node(12)
#     y.right.left = Node(16)
#     y.right.right = Node(25)

#     if isSameTree(x,y):
#         print('Tree is same')
#     else :
#         print('Tree are not same.')


''' find the sub array local area'''
 
def findPair(arr, target) :
    arr.sort()
    (low, high) = (0, len(arr)-1)
    while low < high:
        if(arr[low] + arr[high] == target):
            print('pair found:', (arr[low], arr[high]))
            return
        
        if arr[low] + arr[high] < target:
            low = low +1
        else:
            high = high +1
    
    print("No pair found")


if __name__ == '__main__':
    arr = [8, 7, 2, 5, 3,1]
    target = 11

    print(findPair(arr, target))
