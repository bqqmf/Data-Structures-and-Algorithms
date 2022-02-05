# collections.deque로 스택 구현
from collections import deque


class Stack:
    def __init__(self):
        self.stack = deque()

    def __str__(self):
        return "".join(str(self.stack))

    # 스택이 비었으면 True 반환, 그렇지 않으면 False 반환
    def isEmpty(self):
        return False if len(self.stack) else True

    # 스택의 끝에 data 삽입
    def push(self, data):
        self.stack.append(data)

    # 스택에 값이 있다면 끝에서 data를 꺼내고 반환
    def pop(self):
        if self.isEmpty():
            return "Stack is Empty"
        else:
            return self.stack.pop()

    # 스택에 값이 있다면 끝의 data를 반환
    def peek(self):
        if self.isEmpty():
            return "Stack is Empty"
        else:
            return self.stack[-1]

    # 스택의 크기 반환
    def size(self):
        return len(self.stack)


if __name__ == '__main__':
    myStack = Stack()
    myStack.push(1)
    myStack.push(2)
    myStack.push(3)
    print("myStack:", myStack)
    print("myStack의 맨 끝:", myStack.peek())
    print("myStack에서 pop한 값:", myStack.pop())
    print("myStack에서 pop한 값:", myStack.pop())
    print("myStack에서 pop한 값:", myStack.pop())
    print("myStack에서 pop한 값:", myStack.pop())
