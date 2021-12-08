
#include <iostream>

using namespace std;
int main()
{
    int N;
    int Set[10] = {};
    int Count = 0;
    int Min = 9;

    cin >> N;

    if (N == 0)
        Count = 1;

    while (N > 0)
    {
        if (N % 10 == 6 && Set[6] < Set[9])
            Set[9]--;
        else if (N % 10 == 9 && Set[6] > Set[9])
            Set[6]--;
        else
            Set[N % 10]--;

        N /= 10;
    }

    for (int i = 0; i < 10; ++i)
    {
        if (Min > Set[i])
            Min = Set[i];
    }

    Min *= -1;

    Count += Min;

    cout << Count;

    return 0;
}