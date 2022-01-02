
#include <iostream>

using namespace std;
int main()
{
    int N = 0, Score = 0, P = 0;
    int Count = 0;

    cin >> N >> Score >> P;

    int Rec[50] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> Rec[i];
    }

    while (Count < P)
    {
        if (Score >= Rec[Count])
            break;

        Count++;
    }

    if (Count >= P || (N >= P && Score == Rec[P - 1]))
        cout << -1;
    else
        cout << Count + 1;

    return 0;
}
