
#include <iostream>

using namespace std;
int main()
{
    int N, T;
    cin >> N >> T;

    int Album[20] = {};
    int AlbumCount[20] = {};
    int AlbumOld[20] = {};
    int MinCount = 10001;
    int MinOld = 10001;
    int Vote = 0;
    int Count = 0;
    bool Find = false;

    for (int i = 0; i < T; i++)
    {
        MinOld = 10001;
        MinCount = 10001;
        Find = false;

        cin >> Vote;

        if (Count < N)
        {
            for (int j = 0; j < N; j++)
            {
                if (Vote == Album[j])
                {
                    AlbumCount[j]++;
                    Find = true;
                    break;
                }
            }

            if (!Find)
            {
                Album[Count] = Vote;
                AlbumCount[Count]++;
                AlbumOld[Count] = Count;
                Count++;
            }
        }

        else
        {
            for (int j = 0; j < N; j++)
            {
                if (Vote == Album[j])
                {
                    AlbumCount[j]++;
                    Find = true;
                    break;
                }
            }

            if (!Find)
            {
                for (int j = 0; j < N; j++)
                {
                    if (MinCount > AlbumCount[j])
                        MinCount = AlbumCount[j];
                }
                for (int j = 0; j < N; j++)
                {
                    if (MinOld > AlbumOld[j] && MinCount == AlbumCount[j])
                        MinOld = AlbumOld[j];
                }
                for (int j = 0; j < N; j++)
                {
                    if (MinOld == AlbumOld[j] && MinCount == AlbumCount[j])
                    {
                        Album[j] = Vote;
                        AlbumCount[j] = 1;
                        AlbumOld[j] = Count;
                        Count++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (Album[i] > Album[j] && Album[i] > 0 && Album[j] > 0)
            {
                int tmp = Album[i];
                Album[i] = Album[j];
                Album[j] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (Album[i] > 0)
            cout << Album[i] << " ";
    }


    return 0;
}