
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    while (true)
    {
        cin >> N;
        if (N == 0)
            break;

        while (N >= 10)
        {
            int Sum = 0;
            while (N > 0)
            {
                Sum += N % 10;
                N /= 10;
            }

            N = Sum;
        }

        cout << N << "\n";
    }


    return 0;
}