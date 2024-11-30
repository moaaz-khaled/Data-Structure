from typing import List , TypeVar
Type = TypeVar("Type")

class Stack:
    def __init__(self , dataType : Type) -> None:
        self.__stack = []
        self.__datatype = dataType

    def push(self , item) -> bool:
        if isinstance(item , self.__datatype):
            self.__stack.append(item)
            return True
        return False
    
    def pop(self):
        if len(self.__stack) > 0:
            return self.__stack.pop()
        return "can't pop stack is Empty"
    
    def top(self) :
        if len(self.__stack) > 0:
            return self.__stack[-1]
        else:
            return "stack is Empty"
    
    def size(self) -> int:
        return len(self.__stack)
    
    def isEmpty(self) -> bool:
        return len(self.__stack) == 0
    
    def isFull(self) -> bool:
        return False

    def clear(self) -> bool:
        self.__stack.clear()
        return True
    
    def print(self):
        for index in range(0 , len(self.__stack)):
            print(self.__stack[-(index + 1)])
    
    def show_stack(self):
        print(self.__stack)