
#include <iostream>

int Sorted_List[100];

void Merge(int list[], int Left, int Mid, int Right)
{
    int i, j, k, l;
    i = Left;
    j = Mid + 1;
    k = Left;

    while (i <= Mid && j <= Right)
    {
        if (list[i] < list[j])
            Sorted_List[k++] = list[i++];
        else
            Sorted_List[k++] = list[j++];
    }

    if (i > Mid)
    {
        for (l = j; l <= Right; l++)
            Sorted_List[k++] = list[l];
    }

    else
    {
        for (l = i; l <= Mid; l++)
            Sorted_List[k++] = list[l];
    }

    for (l = Left; l <= Right; l++)
        list[l] = Sorted_List[l];
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

    int N;
    int Max = 0;
    int Count = 0;

    cin >> N;

    int* Arr = new int[N];
    int Continuous_Num[5] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    Merge_Sort(Arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        Count = 0;
        for (int j = 0; j < 5; j++)
        {
            Continuous_Num[j] = Arr[i] + j;
        }

        for (int j = 0; j < 5; j++)
        {
            for (int k = i; k < N; k++)
            {
                if (Continuous_Num[j] == Arr[k])
                    Count++;
            }
        }

        if (Count > Max)
            Max = Count;
    }

    if (Max <= 5)
        Max = 5 - Max;
    else
        Max = 0;

    cout << Max;

    delete[] Arr;

    return 0;
}