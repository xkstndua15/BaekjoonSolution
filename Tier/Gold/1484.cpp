
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int G;
    bool Find = false;
    double Output;

    cin >> G;

    for (int i = 1; i <= 100000; i++)
    {
        Output = pow(i, 2) - G;

        if (Output < 0 || Output < 1)
            continue;

        Output = sqrt(Output);

        if (Output - (int)Output == 0 && (int)Output != i)
        {
            cout << i << "\n";
            Find = true;
        }
    }

    if (!Find)
        cout << -1 << "\n";


    return 0;
}