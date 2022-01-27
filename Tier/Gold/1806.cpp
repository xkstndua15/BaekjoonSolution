#include <iostream>

int List[100000];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S;
    int Sum = 0;
    int Output = 0;

    cin >> N >> S;

    int left = 0;
    int right = 0;
    Output = N * 2;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];

        Sum += List[i];

        right = i;

        while (left <= right)
        {
            if (Sum - List[left] < S)
                break;

            Sum -= List[left];
            left++;
        }

        if (Sum >= S)
        {
            if (right + 1 == left)
                Output = 1;

            else if (Output > right - left + 1)
                Output = right - left + 1;
        }
    }

    if (Output == N * 2)
        Output -= N * 2;

    cout << Output;

    return 0;
}
