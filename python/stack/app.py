from Stack import Stack

def main():
    stack = Stack(int)
    print("size of stack after initialize it" , stack.size())
    stack.push(5)
    stack.push(10)
    stack.push(15)
    stack.push(20)
    stack.push("mo3az") #--> ignore it because it string not int
    print("size of stack after push some element is :" , stack.size())
    stack.print()
    stack.pop()
    stack.pop()
    print("size of stack after pop element is :" , stack.size())
    print("Top Element in Stack is " , stack.top())
    print("Stack Now is :")
    stack.print()
    stack.show_stack()

main()