
#include <iostream>

using namespace std;
int main()
{

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = N - i; j < N; j++)
		{
			cout << " ";
		}

		for (int j = N - 1 - i; j > 0; j--)
		{
			cout << "*";
		}

		cout << "*";

		for (int j = N - 1 - i; j > 0; j--)
		{
			cout << "*";
		}

		if (i < N - 1)
			cout << "\n";
	}
}