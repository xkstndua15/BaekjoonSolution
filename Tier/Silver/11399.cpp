
#include <iostream>

int Copy[1000000];
int List[1000000];

void Merge(int list[], int left, int mid, int right);
void MergeSort(int list[], int left, int right);

int Search(int list[], int left, int right, int _Value)
{
    int mid = 0;
    int Output = -1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (list[mid] >= _Value)
        {
            Output = mid;
            right = mid - 1;
        }

        else
            left = mid + 1;
    }

    if (list[Output] != _Value)
        Output = -1;

    return Output;
}

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    int Sum = 0;
    int Output = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    MergeSort(List, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        Sum += List[i];

        Output += Sum;
    }

    cout << Output;

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
    int mid = 0;

    if (left < right)
    {
        mid = (left + right) / 2;

        MergeSort(list, left, mid);
        MergeSort(list, mid + 1, right);
        Merge(list, left, mid, right);
    }
}
