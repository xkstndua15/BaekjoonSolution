
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0;
    int F = 0;

    cin >> N >> F;

    N /= 100;
    N *= 100;

    for (int i = 0; i < 100; i++)
    {
        if (N % F == 0)
            break;

        N++;
    }

    char Output[3] = {};

    Output[0] = (char)(N / 10 % 10 + 48);
    Output[1] = (char)(N % 10 + 48);

    cout << Output[0] << Output[1];

    return 0;
}