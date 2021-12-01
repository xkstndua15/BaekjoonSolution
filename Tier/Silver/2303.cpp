#include <iostream>

using namespace std;
int main()
{
    int N;

    cin >> N;

    int* Arr = new int[5];

    int Sum = 0;
    int Max = -1;
    int Output = -1;
    int temp;

    for (int i = 0; i < N; ++i)
    {
        Sum = 0;
        for (int j = 0; j < 5; ++j)
        {
            cin >> Arr[j];

            Sum += Arr[j];
        }

        temp = Sum;
        for (int j = 0; j < 4; ++j)
        {
            for (int k = j + 1; k < 5; ++k)
            {
                Sum = temp;

                Sum -= Arr[j];
                Sum -= Arr[k];

                if (Sum % 10 >= Max)
                {
                    Max = Sum % 10;
                    Output = i + 1;
                }
            }
        }
    }

    cout << Output;

    return 0;
}