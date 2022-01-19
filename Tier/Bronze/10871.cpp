
#include <iostream>

int Number[10000];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        cin >> Number[i];
        if (Number[i] >= X)
            Number[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        if (Number[i] > 0)
            cout << Number[i] << " ";
    }


    return 0;
}