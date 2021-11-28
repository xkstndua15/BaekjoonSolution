
#include <iostream>

using namespace std;
int main()
{
	int Bingo[25] = {};
	int Input[25] = {};
	int BingoCount = 0, Count = 0;
	int Column = 0, Row = 0, LeftToRight = 0, RightToLeft;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> Bingo[j + i * 5];
		}
	}

	for (int i = 0; i < 25; ++i)
	{
		cin >> Input[i];
	}

	while (BingoCount < 3)
	{
		BingoCount = 0;

		for (int i = 0; i < 25; ++i)
		{
			if (Bingo[i] == Input[Count])
				Bingo[i] = -1;
		}

		Count++;

		LeftToRight = 0;
		RightToLeft = 0;
		for (int i = 0; i < 5; ++i)
		{
			if (-1 == Bingo[i * 6])
				LeftToRight++;
			if (-1 == Bingo[(i + 1) * 4])
				RightToLeft++;
		}

		if (5 == LeftToRight)
			BingoCount++;
		if (5 == RightToLeft)
			BingoCount++;

		for (int i = 0; i < 5; ++i)
		{
			Column = 0;
			Row = 0;
			for (int j = 0; j < 5; ++j)
			{
				if (Bingo[j + i * 5] == -1)
					Column++;
				if (Bingo[j * 5 + i] == -1)
					Row++;
			}

			if (5 == Column)
				BingoCount++;
			if (5 == Row)
				BingoCount++;
		}
	}

	cout << Count << endl;

	return 0;
}