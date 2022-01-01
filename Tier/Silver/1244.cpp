
#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	cin >> N;

	bool Switch[101] = {};

	for (int i = 0; i < N; i++)
	{
		cin >> Switch[i];
	}

	int S = 0;
	cin >> S;

	int Stu[101] = {};
	int Num[101] = {};

	for (int i = 0; i < S; i++)
	{
		cin >> Stu[i] >> Num[i];
		Num[i]--;
	}

	for (int i = 0; i < S; i++)
	{
		if (Stu[i] % 2 == 1)
		{
			for (int j = Num[i]; j < N; j += Num[i] + 1)
			{
				Switch[j] = !Switch[j];
			}
		}

		else
		{
			int Count = 1;

			Switch[Num[i]] = !Switch[Num[i]];

			while (Switch[Num[i] - Count] == Switch[Num[i] + Count] && Num[i] - Count >= 0 && Num[i] + Count < N)
			{
				Switch[Num[i] - Count] = !Switch[Num[i] - Count];
				Switch[Num[i] + Count] = !Switch[Num[i] + Count];

				Count++;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << "\n";

		if (Switch[i])
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}


	return 0;
}