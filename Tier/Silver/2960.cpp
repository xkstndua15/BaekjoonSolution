
#include <iostream>

int Snail[999][999];

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, K;
	int Count = 0;
	int S = 0;

	cin >> N >> K;

	int Num[2000] = {};

	for (int i = 2; i <= N; ++i)
	{
		Num[i] = i;
	}

	while (Count <= K)
	{
		while (true)
		{
			if (Num[S] != 0)
			{
				S = Num[S];
				break;
			}

			++S;
		}

		for (int i = S; i <= N; i += S)
		{
			if (Num[i] % S == 0 && Num[i] != 0)
			{
				++Count;

				if (Count == K)
				{
					cout << Num[i];
					break;
				}

				Num[i] = 0;
			}
		}
	}

	return 0;
}