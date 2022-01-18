
#include <iostream>

class Stack
{
private:
    int Capacity;
    int Size;
    int* StackArr;

public:
    Stack(int _Capacity)
        : Size(0)
    {
        Capacity = _Capacity;
        StackArr = new int[Capacity] {};
    }
    ~Stack()
    {
        delete[] StackArr;
    }

public:
    void push(int _Val)
    {
        StackArr[Size++] = _Val;
    }

    void pop()
    {
        Size--;
    }

    int top() const
    {
        return StackArr[Size - 1];
    }

public:
    int operator [] (int _Val) const
    {
        return StackArr[_Val];
    }

};

int Arr[100000];
char Out[200001];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int ArrSize = 0;
    int OutSize = 0;
    int Number = 1;

    cin >> N;

    Stack Stk(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    while (ArrSize < N)
    {
        int Top = Stk.top();
        if (Top == Arr[ArrSize])
        {
            Stk.pop();
            Out[OutSize++] = '-';
            ArrSize++;
        }

        else
        {
            if (Top > Arr[ArrSize])
            {
                cout << "NO";
                return 0;
            }

            else
            {
                Stk.push(Number++);
                Out[OutSize++] = '+';
            }
        }
    }

    for (int i = 0; Out[i] != '\0'; i++)
    {
        cout << Out[i] << "\n";
    }

    return 0;
}