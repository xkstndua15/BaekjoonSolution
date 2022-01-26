#include <iostream>

int NList[20000];
int MList[20000];
int Copy[20000];

void Merge(int list[], int Left, int Mid, int Right)
{
    int i, j, k, l;
    i = Left;
    j = Mid + 1;
    k = Left;

    while (i <= Mid && j <= Right)
    {
        if (list[i] < list[j])
            Copy[k++] = list[i++];
        else
            Copy[k++] = list[j++];
    }

    if (i > Mid)
    {
        for (l = j; l <= Right; l++)
            Copy[k++] = list[l];
    }

    else
    {
        for (l = i; l <= Mid; l++)
            Copy[k++] = list[l];
    }

    for (l = Left; l <= Right; l++)
        list[l] = Copy[l];
}

void Merge_Sort(int list[], int Left, int Right)
{
    int Mid = (Left + Right) / 2;
    if (Left < Right)
    {
        Mid = (Left + Right) / 2;
        Merge_Sort(list, Left, Mid);
        Merge_Sort(list, Mid + 1, Right);
        Merge(list, Left, Mid, Right);
    }
}

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    int N, M;
    int Count = 0;

    while (T--)
    {
        Count = 0;
        N = 1;
        M = 1;

        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            cin >> NList[i];
        }

        for (int i = 0; i < M; i++)
        {
            cin >> MList[i];
        }

        Merge_Sort(NList, 0, N - 1);
        Merge_Sort(MList, 0, M - 1);

        for (int i = N - 1; i >= 0; i--)
        {
            if (NList[i] > MList[M - 1])
                Count += M;

            else
            {
                for (int j = M - 1; j >= 0; j--)
                {
                    if (NList[i] > MList[j])
                    {
                        Count += j + 1;
                        break;
                    }
                }
            }
        }

        cout << Count << "\n";
    }

    return 0;
}
