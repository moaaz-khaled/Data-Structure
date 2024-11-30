from typing import List , TypeVar

class BinaryTree:
    def __init__(self , value) -> None:
        self.__value = value
        self.__left_root = None
        self.__Right_root = None
    
    def insert_left(self , value):
        if self.__left_root == None:
            self.__left_root = BinaryTree(value)
        else:
            new_left = BinaryTree(value)
            new_left.__left_root = self.__left_root
            self.__left_root = new_left
    
    def insert_right(self, value):
        if self.__Right_root == None:
            self.__Right_root = BinaryTree(value)
        else:
            new_right = BinaryTree(value)
            new_right.__Right_root = self.__Right_root
            self.__Right_root = new_right

    def pre_order(self):
        print(self.__value)
        if self.__left_root:
            self.__left_root.pre_order()
        if self.__Right_root:
            self.__Right_root.pre_order()

    def in_order(self):
        if self.__left_root:
            self.__left_root.in_order()
        print(self.__value)
        if self.__Right_root:
            self.__Right_root.in_order()

    def post_order(self):
        if self.__Right_root:
            self.__Right_root.post_order()
        if self.__left_root:
            self.__left_root.post_order()
        print(self.__value)
