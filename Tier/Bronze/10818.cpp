#include <iostream>

int List[1000000];

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int min = 10000000;
    int max = -10000000;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> List[i];

        if (min > List[i])
            min = List[i];
        if (max < List[i])
            max = List[i];
    }

    cout << min << " " << max;



    return 0;
}
