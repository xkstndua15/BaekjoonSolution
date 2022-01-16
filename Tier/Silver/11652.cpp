
#include <iostream>

long long Arr[500000];
long long List[500000];

void Merge(long long list[], int left, int mid, int right);
void MergeSort(long long list[], int left, int right);

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int Count = 1;
    int Max = -1;
    long long Output = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    MergeSort(List, 0, N - 1);

    for (int i = 1; i < N; i++)
    {
        if (List[i] == List[i - 1])
            Count++;

        else
        {
            if (Count > Max)
            {
                Max = Count;
                Count = 1;
                Output = List[i - 1];
            }
            else
                Count = 1;
        }
    }

    if (Count > Max)
    {
        if (N > 0)
            Output = List[N - 1];
    }

    cout << Output;

    return 0;
}

void Merge(long long list[], int left, int mid, int right)
{
    int i, j, k;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right)
    {
        if (list[i] <= list[j])
        {
            Arr[k++] = list[i++];
        }

        else
        {
            Arr[k++] = list[j++];
        }
    }

    if (i > mid)
    {
        for (; j <= right; j++)
        {
            Arr[k++] = list[j];
        }
    }

    else
    {
        for (; i <= mid; i++)
        {
            Arr[k++] = list[i];
        }
    }

    for (int l = left; l <= right; l++)
    {
        list[l] = Arr[l];
    }
}

void MergeSort(long long list[], int left, int right)
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