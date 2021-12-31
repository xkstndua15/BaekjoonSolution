
#include <iostream>
#include <string.h>

char NList[1001][101];
char Map[1001][101];

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int length = 0;
	int Count = 0;
	bool Loop = true;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> NList[i];
	}

	while (NList[0][length] != '\0')
	{
		length++;
	}

	while (length--)
	{
		for (int i = 0; i < N; ++i)
		{
			Map[i][Count] += NList[i][length];
		}

		for (int i = 0; i < N; ++i)
		{
			for (int j = i + 1; j < N; ++j)
			{
				if (strcmp(Map[j], Map[i]) == 0)
				{
					Loop = true;
					break;
				}

				else
					Loop = false;
			}

			if (Loop)
				break;
		}

		Count++;

		if (!Loop)
			break;
	}

	cout << Count;

	return 0;
}