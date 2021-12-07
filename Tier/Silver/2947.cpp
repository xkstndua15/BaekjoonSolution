
#include <iostream>

using namespace std;
int main()
{
    bool Sort = false;

    int Number[5] = {};

    for (int i = 0; i < 5; ++i)
    {
        cin >> Number[i];
    }

    while (!Sort)
    {
        if (Number[0] > Number[1])
        {
            int temp = Number[0];
            Number[0] = Number[1];
            Number[1] = temp;

            for (int i = 0; i < 5; ++i)
            {
                cout << Number[i] << " ";
            }

            cout << "\n";
        }

        if (Number[1] > Number[2])
        {
            int temp = Number[1];
            Number[1] = Number[2];
            Number[2] = temp;

            for (int i = 0; i < 5; ++i)
            {
                cout << Number[i] << " ";
            }

            cout << "\n";
        }

        if (Number[2] > Number[3])
        {
            int temp = Number[2];
            Number[2] = Number[3];
            Number[3] = temp;

            for (int i = 0; i < 5; ++i)
            {
                cout << Number[i] << " ";
            }

            cout << "\n";
        }

        if (Number[3] > Number[4])
        {
            int temp = Number[3];
            Number[3] = Number[4];
            Number[4] = temp;

            for (int i = 0; i < 5; ++i)
            {
                cout << Number[i] << " ";
            }

            cout << "\n";
        }

        if (Number[0] == 1 && Number[1] == 2 && Number[2] == 3 && Number[3] == 4 && Number[4] == 5)
        {
            Sort = true;
        }
    }

    return 0;
}