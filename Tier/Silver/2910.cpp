
#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
	int N, C;
	int Rank = 1;

	cin >> N >> C;

	unordered_map<int, int> Data;

	int* Num = new int[N + 1] {};

	for (int i = 0; i < N; ++i)
	{
		cin >> Num[i];

		if (Data.find(Num[i]) == Data.end())
			Data.insert(make_pair(Num[i], N - Rank++));
		else
			Data.find(Num[i])->second += N;
	}

	for (int i = 0; i < N - 1; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			if (Data.find(Num[i])->second <= Data.find(Num[j])->second)
			{
				int temp = Num[i];
				Num[i] = Num[j];
				Num[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		cout << Num[i] << " ";
	}

	delete[] Num;

	return 0;
}