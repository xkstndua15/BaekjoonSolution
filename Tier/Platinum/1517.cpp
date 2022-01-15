#include <iostream>

int Arr[500000];
int List[500000];
unsigned long long Count = 0;

void Merge(int list[], int left, int mid, int right);
void MergeSort(int list[], int left, int right);

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    MergeSort(List, 0, N - 1);

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
        if (list[i] <= list[j])
        {
            Arr[k++] = list[i++];
        }

        else
        {
            Arr[k++] = list[j++];
            Count += (unsigned long long)mid - i + 1;
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