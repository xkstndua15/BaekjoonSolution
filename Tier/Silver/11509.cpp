
#include <iostream>

using namespace std;
int main()
{
	int N = 0;
	int Count = 0;

	cin >> N;

	int* H = new int[N];
	int* Flag = new int[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> H[i];

		Flag[i] = 0;
	}

	for (int i = 0; i < N; ++i)
	{
		if (Flag[H[i]] == 0)
		{
			++Flag[H[i] - 1];
		}

		else
		{
			--Flag[H[i]];
			++Flag[H[i] - 1];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		Count += Flag[i];
	}

	cout << Count;

	
	return 0;
}