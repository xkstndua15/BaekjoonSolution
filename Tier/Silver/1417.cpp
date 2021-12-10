
#include <iostream>

using namespace std;
int main()
{
	int N;
	int Index = -1;
	int Max = -1;
	int Output = 0;

	cin >> N;

	int* Pre = new int[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> Pre[i];
	}

	while (Index != 0)
	{
		Max = -1;
		for (int i = 0; i < N; ++i)
		{
			if (Max <= Pre[i])
			{
				Max = Pre[i];
				Index = i;
			}
		}

		if (Index == 0)
			break;

		Pre[Index]--;
		Pre[0] += 1;
		++Output;
	}

	cout << Output;
	
	return 0;
}