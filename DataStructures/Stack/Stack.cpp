#include <iostream>

// 스택의 최대 크기를 1000으로 설정
#define MAX 1000

using namespace std;

class Stack
{
    public:
        Stack()
        {
            mTop = -1; 
        }
        bool Push(int); // 스택의 가장 맨 위에 값을 추가하는 함수
        int Pop();  // 스택의 가장 맨 위 요소를 삭제하고 반환하는 함수
        int Peek(); // 스택의 가장 맨 위 요소를 삭제없이 반환하는 함수
        bool IsEmpty(); // 스택이 비었으면 true, 그렇지 않으면 false를 반환하는 함수

    private:
        int mStack[MAX];
        int mTop;   // 스택의 가장 맨 위의 요소의 인덱스

};

bool Stack::Push(const int data)
{
    if (mTop >= MAX)
    {
        cout << "Stack is Full";
        return false;
    }
    else
    {
        mStack[++mTop] = data;
        return true;
    }
}

int Stack::Pop()
{
    if (mTop < 0)
    {
        cout << "Stack is Empty" << '\n';
        return false;
    }
    else
    {
        return mStack[mTop--];
    }
}

int Stack::Peek()
{
    if (mTop < 0)
    {
        cout << "Stack is Empty" << '\n';
        return false;
    }
    else
    {
        return mStack[mTop];
    }
}

bool Stack::IsEmpty()
{
    return (mTop < 0);
}


int main()
{
    Stack mystack;
    mystack.Push(1);   
    mystack.Push(2);    
    mystack.Push(3);
    cout << mystack.Peek() << '\n';
    cout << mystack.Pop() << '\n';
    cout << mystack.Pop() << '\n';
    cout << mystack.Pop() << '\n';
    cout << mystack.Pop() << '\n';
    cout << mystack.IsEmpty() << '\n';

    return 0;
}
