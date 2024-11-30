class BinarySearchTree:
    
    def __init__(self , value) -> None:
        self.__value = value
        self.__left_child = None
        self.__right_child = None
    
    def insert(self , value) -> bool:
        if value <= self.__value and self.__left_child:
            self.__left_child.insert(value)
        
        elif value <= self.__value and self.__left_child == None:
            self.__left_child = BinarySearchTree(value)
        
        elif value > self.__value and self.__right_child:
            self.__right_child.insert(value)

        elif value > self.__value and self.__right_child == None:
            self.__right_child = BinarySearchTree(value)

    def find(self , value):
        if value < self.__value and self.__left_child:
            return self.__left_child.find(value)
        if value > self.__value and self.__right_child:
            return self.__right_child.find(value)
        return value == self.__value

    def pre_order(self):
        if self.__value:
            print(self.__value) 
        if self.__left_child:
            self.__left_child.pre_order()
        if self.__right_child:
            self.__right_child.pre_order()

    def in_order(self):
        if self.__left_child:
            self.__left_child.in_order()
        if self.__value:
            print(self.__value)
        if self.__right_child:
            self.__right_child.in_order()

    def post_order(self):
        if self.__right_child:
            self.__right_child.post_order()
        if self.__left_child:
            self.__left_child.post_order()
        if self.__value:
            print(self.__value)
    
    def minValue(self):
        if self.__left_child:
            return self.__left_child.minValue()
        else:
            return self.__value
        
    def maxValue(self):
        if self.__right_child:
            return self.__right_child.maxValue()
        else:
            return self.__value
    
    def clear(self):
        self.__value = None
        self.__left_child = None
        self.__right_child = None
