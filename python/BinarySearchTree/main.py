from BinarySearchTree import BinarySearchTree as BST

def main():
    MyTree = BST(250)
    MyTree.insert(240)
    MyTree.insert(230)
    MyTree.insert(245)
    MyTree.insert(243)
    MyTree.insert(259)
    MyTree.insert(260)
    MyTree.insert(252)
    MyTree.insert(270)
    MyTree.insert(265)
    MyTree.insert(280)
    MyTree.insert(220)
    MyTree.insert(235)
    print("Tree in (pre order) state")
    MyTree.pre_order()
    print("Tree in (in order) state")
    MyTree.in_order()
    print("Tree in (post order) state")
    MyTree.post_order()
    print(MyTree.find(2600))
    print(MyTree.find(260))
    print(MyTree.find(265))
    print("Minimum Value in Tree is : " , MyTree.minValue())
    print("Maximum Value in Tree is : " , MyTree.maxValue())
    MyTree.clear()
    print("Clear Tree Done !")
    MyTree.in_order()

main()