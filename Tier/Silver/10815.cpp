
#include <iostream>

void Merge(int list[], int left, int mid, int right);
void MergeSort(int list[], int left, int right);
bool Find(int list[], int left, int right, int FindNum);

int CpyArr[500000];
int Card[500000];
int Arr[500000];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    bool FindCard = false;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> Card[i];
    }

    MergeSort(Card, 0, N - 1);

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> Arr[i];
    }

    for (int i = 0; i < M; i++)
    {
        FindCard = false;

        FindCard = Find(Card, 0, N, Arr[i]);

        if (FindCard)
            cout << "1 ";
        else
            cout << "0 ";
    }

    return 0;
}

bool Find(int list[], int left, int right, int FindNum)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;

        if (FindNum == list[mid])
            return true;

        if (FindNum < list[mid])
            return Find(list, left, mid, FindNum);
        else
            return Find(list, mid + 1, right, FindNum);
    }

    return false;
}

void Merge(int list[], int left, int mid, int right)
{
    int i, j, k;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right)
    {
        if (list[i] < list[j])
            CpyArr[k++] = list[i++];
        else
            CpyArr[k++] = list[j++];
    }

    if (i > mid)
    {
        for (; j <= right; j++)
            CpyArr[k++] = list[j];
    }

    else
    {
        for (; i <= mid; i++)
            CpyArr[k++] = list[i];
    }

    for (int l = left; l <= right; l++)
    {
        list[l] = CpyArr[l];
    }
}

void MergeSort(int list[], int left, int right)
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;

        MergeSort(list, left, mid);
        MergeSort(list, mid + 1, right);
        Merge(list, left, mid, right);
    }
}

