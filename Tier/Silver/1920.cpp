
#include <iostream>

int Sorted_List[100000];
int List[100000];
int NList[100000];

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

bool Search(int _List[], int Left, int Right, int _FindNum)
{
    int Mid = (Left + Right) / 2;

    if (_FindNum == _List[Mid])
        return true;

    else
    {
        if (Left >= Right)
            return false;

        if (_FindNum > _List[Mid])
            return Search(_List, Mid + 1, Right, _FindNum);

        else if (_FindNum < _List[Mid])
            return Search(_List, Left, Mid, _FindNum);
    }

    return false;
}

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int Count = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    Merge_Sort(List, 0, N - 1);

    int N2;
    cin >> N2;

    for (int i = 0; i < N2; i++)
    {
        cin >> NList[i];
    }

    for (int i = 0; i < N2; i++)
    {
        bool Find = false;
        Find = Search(List, 0, N - 1, NList[i]);

        if (!Find)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}