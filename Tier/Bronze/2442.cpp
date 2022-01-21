
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }

        if (i < N)
            cout << "\n";
    }

    return 0;
}