#include <iostream>

using namespace std;
int main()
{
    int N;
    int Count = 0;

    cin >> N;

    int Number = N;

    do {
        Number = (Number % 10 * 10) + (((Number / 10) + (Number % 10)) % 10);
        ++Count;

    } while (Number != N);

    cout << Count;


    return 0; 
}