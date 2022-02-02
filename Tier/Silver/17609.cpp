#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    while (T--)
    {
        int length = 0;
        char* charList = new char[100001];
        int Output = 0;

        cin >> charList;

        for (int i = 0; charList[i] != '\0'; i++)
        {
            length++;
        }

        int left = 0;
        int right = length - 1;

        while (left <= right)
        {
            if (charList[left] == charList[right])
            {
                left++;
                right--;
            }

            else if (charList[left] != charList[right])
            {
                Output = 1;

                int Left = left + 1;
                int Right = right;

                while (Left <= Right)
                {
                    if (charList[Left] == charList[Right])
                    {
                        Left++;
                        Right--;
                    }

                    else if (charList[Left] != charList[Right])
                    {
                        Output = 2;
                        break;
                    }
                }

                if (Output == 2)
                {
                    Output = 1;
                    Left = left;
                    Right = right - 1;
                    while (Left <= Right)
                    {
                        if (charList[Left] == charList[Right])
                        {
                            Left++;
                            Right--;
                        }

                        else if (charList[Left] != charList[Right])
                        {
                            Output = 2;
                            break;
                        }
                    }
                }

                break;
            }
        }

        cout << Output << "\n";

        delete[] charList;
    }

    return 0;
}
