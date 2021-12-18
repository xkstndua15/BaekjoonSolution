
#include <iostream>

int Snail[999][999];

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	int Num;
	int Index[2] = {};
	int i = 0, j = 0;
	int Round = 0;

	cin >> N >> Num;
	int Count = N * N;

	if (Num == 1)
	{
		Index[0] = (N - 1) / 2;
		Index[1] = (N - 1) / 2;
	}

	while (i != (N - 1) / 2 && j != (N - 1) / 2)
	{
		for (; i < N - (Round + 1); ++i)
		{
			if (Snail[i][j] != 0)
				break;

			if (Count == Num)
			{
				Index[0] = i;
				Index[1] = j;
			}

			Snail[i][j] = Count--;
		}

		for (; j < N - (Round + 1); ++j)
		{
			if (Snail[i][j] != 0)
				break;

			if (Count == Num)
			{
				Index[0] = i;
				Index[1] = j;
			}

			Snail[i][j] = Count--;
		}

		for (; i > Round; --i)
		{
			if (Snail[i][j] != 0)
				break;

			if (Count == Num)
			{
				Index[0] = i;
				Index[1] = j;
			}

			Snail[i][j] = Count--;
		}

		for (; j > Round; --j)
		{
			if (Snail[i][j] != 0)
				break;

			if (Count == Num)
			{
				Index[0] = i;
				Index[1] = j;
			}

			Snail[i][j] = Count--;
		}

		++Round;
		i = Round;
		j = Round;
	}

	Snail[i][j] = Count;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			cout << Snail[i][j] << " ";
		}

		cout << "\n";
	}

	cout << Index[0] + 1 << " " << Index[1] + 1;

	return 0;
}