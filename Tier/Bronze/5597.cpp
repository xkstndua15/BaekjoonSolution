
#include <iostream>

using namespace std;
int main()
{
	int N[30];

	for (int i = 0; i < 30; ++i)
	{
		N[i] = i + 1;
	}

	for (int i = 0; i < 28; ++i)
	{
		int Input;

		cin >> Input;

		N[Input - 1] = -1;
	}

	for (int i = 0; i < 30; ++i)
	{
		if (-1 != N[i])
			cout << N[i] << endl;
	}

	return 0;
}