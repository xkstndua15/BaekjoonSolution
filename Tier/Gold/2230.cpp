#include <iostream>

int List[100000];
int Copy[100000];

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
        {
            Copy[k++] = list[j];
        }
    }

    else
    {
        for (; i <= mid; i++)
        {
            Copy[k++] = list[i];
        }
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

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int left = 0, right = 1;
    int min;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];
    }

    MergeSort(List, 0, N - 1);

    min = List[N - 1] - List[0] + 1;

    while (left < N - 1 && right < N)
    {
        int Minus = List[right] - List[left];

        if (Minus >= M)
        {
            if (min > Minus)
            {
                min = Minus;
            }

            left++;
        }
        else
            right++;
    }

    cout << min;

    return 0;
}
