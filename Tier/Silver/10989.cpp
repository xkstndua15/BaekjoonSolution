
#include <iostream>

int Num[10001] = {};

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int Number = 0;
        cin >> Number;

        Num[Number]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < Num[i]; j++)
        {
            cout << i << "\n";
        }
    }

    return 0;
}