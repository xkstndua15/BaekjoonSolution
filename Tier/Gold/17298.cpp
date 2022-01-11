
#include <iostream>

int AList[1000000];

class Stack
{
private:
    int* m_Stack;
    int m_Capacity;
    int m_Size;

public:
    Stack()
    {
        m_Size = 0;
        m_Capacity = 1000000;
        m_Stack = new int[m_Capacity] {};
    }

public:
    void push(int _Value)
    {
        m_Stack[m_Size++] = _Value;

        if (m_Size == m_Capacity)
        {
            m_Capacity *= 2;
            int* newStack = new int[m_Capacity];

            for (int i = 0; i < m_Size; i++)
            {
                newStack[i] = m_Stack[i];
            }

            delete[] m_Stack;
            m_Stack = newStack;
        }
    }

    void pop()
    {
        m_Stack[m_Size--] = 0;
    }

    int top()
    {
        return m_Stack[m_Size - 1];
    }

    bool empty()
    {
        if (m_Size == 0)
            return true;

        return false;
    }

public:
    int operator [](int Index)
    {
        return m_Stack[Index];
    }
};

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    Stack OBig;
    Stack Output;

    cin >> A;

    for (int i = 0; i < A; i++)
    {
        cin >> AList[i];
    }

    for (int i = A - 1; i >= 0; i--)
    {
        while (OBig.top() <= AList[i] && !OBig.empty())
        {
            OBig.pop();
        }

        if (!OBig.empty())
            Output.push(OBig.top());
        else
            Output.push(-1);

        OBig.push(AList[i]);
    }

    while (!Output.empty())
    {
        cout << Output.top() << " ";
        Output.pop();
    }

    return 0;
}

