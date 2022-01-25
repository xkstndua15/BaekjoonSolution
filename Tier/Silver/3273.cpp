#include <iostream>

int List[100000];
int Copy[100000];

void Merge(int list[], int left, int mid, int right);
void MergeSort(int list[], int left, int right);

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    int Sum = 0;
    int Count = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    cin >> X;

    MergeSort(List, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        Sum = 0;
        for (int j = i + 1; j < N; j++)
        {
            Sum = List[i] + List[j];
            if (Sum == X)
                Count++;
            else if (Sum > X)
                break;
        }
    }

    cout << Count;

    return 0;
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
            Copy[k++] = list[i++];
        else
            Copy[k++] = list[j++];
    }

    if (i > mid)
    {
        for (; j <= right; j++)
            Copy[k++] = list[j];
    }

    else
    {
        for (; i <= mid; i++)
            Copy[k++] = list[i];
    }

    for (int l = left; l <= right; l++)
    {
        list[l] = Copy[l];
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
