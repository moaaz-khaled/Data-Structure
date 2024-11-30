from BinaryTree import BinaryTree as binaryTree

def main():
    BinaryTree = binaryTree(50)
    BinaryTree.insert_left(150)
    BinaryTree.insert_right(2650)
    BinaryTree.insert_left(4650)
    BinaryTree.insert_right(26050)
    print("Binary Tree pre-order is : ")
    BinaryTree.pre_order()
    print("Binary Tree In-order is : ")
    BinaryTree.in_order()
    print("Binary Tree post-order is : ")
    BinaryTree.post_order()

main()
