
#include <iostream>
#include <stdlib.h>

int h[10000] = {};

int Compare(const void *a, const void *b)
{
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    else
        return 0;
}

using namespace std;
int main()
{
    int N, L;
    int Count = 0;

    cin >> N >> L;

    for (int i = 0; i < N; ++i)
    {
        cin >> h[i];
    }

    qsort(h, N, sizeof(int), Compare);

    while (Count < N)
    {
        if (L >= h[Count])
        {
            ++L;
            ++Count;
        }
        else
            break;
    }

    cout << L;

    return 0;
}