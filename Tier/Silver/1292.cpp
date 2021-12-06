
#include <iostream>

using namespace std;
int main()
{
    int A, B;

    cin >> A >> B;

    int Count = 0;
    int i = 0;
    int Sum = 0;
    int Num = 1;
    int* Number = new int[B * B];

    while (i < B)
    {
        for (; i < Num; ++i)
        {
            Number[i] = Count + 1;
        }

        Num = Num + (Count + 2);
        ++Count;
    }

    for (i = A - 1; i < B; ++i)
    {
        Sum += Number[i];
    }

    cout << Sum;

    delete[] Number;

    return 0;
}