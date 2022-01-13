
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

    int size()
    {
        return m_Size;
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

    Stack Side(N);
    int Move[1000] = {};
    int Count = 1;
    bool Eat = true;
    int Index = 0;
    int MoveIndex = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> NList[i];
    }

    while (Eat)
    {
        if (Count == NList[Index])
        {
            Move[MoveIndex++] = NList[Index];
            Count++;
            Index++;
        }

        else if (Side.top() == Count)
        {
            Move[MoveIndex++] = Side.top();
            Side.pop();
            Count++;
        }

        else if ((Side.top() < NList[Index] && Side.top() > 0) || (Index > N))
            Eat = false;

        else
        {
            Side.push(NList[Index]);

            Index++;
        }
    }

    if (MoveIndex == N)
        cout << "Nice";

    else
        cout << "Sad";

    return 0;
}

