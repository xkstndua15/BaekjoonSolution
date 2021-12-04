
#include <iostream>

using namespace std;
int main()
{
    int Jam[9] = {};
    int Start[9] = {};
    int JamSum = 0;
    int StartSum = 0;
    bool Win = false;

    for (int i = 0; i < 9; ++i)
    {
        cin >> Jam[i];
    }

    for (int i = 0; i < 9; ++i)
    {
        cin >> Start[i];
    }

    for (int i = 0; i < 9; ++i)
    {
        JamSum += Jam[i];

        if (JamSum > StartSum && JamSum != 0)
            Win = true;

        StartSum += Start[i];
    }

    if (Win)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}
