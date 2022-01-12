
#include <iostream>

int NList[1000000];

class Stack
{
private:
    int* m_Stack;
    int m_Capacity;
    int m_Size;

public:
    Stack(int _Capacity)
    {
        m_Size = 0;
        m_Capacity = _Capacity;
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
        m_Size--;
    }

    void reset(int _Size)
    {
        m_Size = _Size;
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

    int N;
    cin >> N;

    int Count = 0;

    Stack Top(N);
    Stack Output(N);
    Stack Index(N);

    for (int i = 0; i < N; i++)
    {
        cin >> NList[i];
    }

    for (int i = 0; i < N; i++)
    {
        while (Top.top() < NList[i] && !Top.empty())
        {
            Top.pop();
            Index.pop();
        }

        if (Top.empty())
            cout << 0 << " ";
        else
            cout << Index.top() << " ";

        Top.push(NList[i]);
        Index.push(i + 1);
    }

    return 0;
}

