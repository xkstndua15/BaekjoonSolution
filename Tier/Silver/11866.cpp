
#include <iostream>

using namespace std;
int main()
{
    int N, K;

    cin >> N >> K;

    int* Num = new int[N];
    int* Output = new int[N];
    int Count = 0;
    int temp = 0;
    int OutCount = 0;
    
    for (int i = 0; i < N; ++i)
    {
        Num[i] = i + 1;
    }

    while (true)
    {
        if(Num[temp] != -1)
            ++Count;
        
        if (Count == K)
        {
            if (Num[temp] != -1)
            {
                Count = 0;
                Output[OutCount++] = Num[temp];
                Num[temp] = -1;
            }

            if (OutCount == N)
                break;
        }

        ++temp;
        if (temp == N)
            temp = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        if (i == 0)
            cout << "<";

        cout << Output[i];

        if (i != N - 1)
            cout << ", ";
    }

    cout << ">";

    return 0;
}
