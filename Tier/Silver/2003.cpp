#include <iostream>

int List[10000];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Output = 0;
    int Sum = 0;

    int N, M;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    for (int i = 0; i < N; i++)
    {
        Sum = List[i];

        if (Sum == M)
            Output++;

        else
        {
            for (int j = i + 1; j < N; j++)
            {
                Sum += List[j];
                if (Sum == M)
                {
                    Output++;
                    break;
                }
                else if (Sum > M)
                    break;
            }
        }
    }

    cout << Output;

    return 0;
}