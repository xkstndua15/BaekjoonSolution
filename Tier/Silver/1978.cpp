
#include <iostream>

using namespace std;
int main()
{
    int N;
    int S[100] = {};
    int Count = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];

        int j = 2;
        for (; j < S[i]; j++)
        {
            if (S[i] == 1)
                break;

            if (S[i] % j == 0)
                break;
        }

        if (j == S[i])
            Count++;
    }

    cout << Count;

    return 0;
}
