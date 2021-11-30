#include <iostream>

using namespace std;
int main()
{
	int N;

	cin >> N;

	int* x = new int[N];
	int* y = new int[N];

	int* Output = new int[N];

	for (int i = 0; i < N; ++i)
	{
		Output[i] = 1;
		cin >> x[i] >> y[i];

		for (int j = 0; j < i; ++j)
		{
			if (x[j] > x[i] && y[j] > y[i])
			{
				Output[i]++;
			}

			else if (x[j] < x[i] && y[j] < y[i])
			{
				Output[j]++;
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		cout << Output[i] << " ";
	}

	return 0;
}