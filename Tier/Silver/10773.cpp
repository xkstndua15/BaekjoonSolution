
#include <iostream>

using namespace std;
int main()
{
    int K = 0;

    cin >> K;

    int* Num = new int[K];
    int Count = 0;
    int Sum = 0;

    for (int i = 0; i < K; ++i)
    {
        cin >> Num[Count];
        if (Count != 0 && Num[Count] == 0)
            --Count;

        else
            ++Count;
    }

    for (int i = 0; i < Count; ++i)
    {
        Sum += Num[i];
    }

    cout << Sum;

    delete[] Num;

    return 0;
}
