
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int main()
{
	int N;
	vector<int> Arr;
	double fAvr = 0;
	int iAvr = 0;
	int Mid = 0;
	int Best = 0;
	int Index = 0;
	int Range = 0;
	int TCount = 0;

	cin >> N;

	int* Num = new int[N] {};
	int* Count = new int[8001] {};

	for (int i = 0; i < N; ++i)
	{
		cin >> Num[i];
		Arr.push_back(Num[i]);
		++Count[4000 + Num[i]];
	}
	make_heap(Arr.begin(), Arr.end());
	sort_heap(Arr.begin(), Arr.end());

	for (int i = 0; i < N; ++i)
	{
		fAvr += Arr[i];
		if (Count[4000 + Arr[i]] >= Best)
		{
			if (Count[4000 + Arr[i]] == Best)
			{
				if (TCount < 1 && Index != Arr[i])
				{
					++TCount;
					Best = Count[4000 + Arr[i]];
					Index = Arr[i];
				}
			}
			else
			{
				TCount = 0;
				Best = Count[4000 + Arr[i]];
				Index = Arr[i];
			}
		}
	}

	iAvr = (int)round(fAvr /= N);
	Mid = Arr[(N - 1) / 2];
	Range = Arr[N - 1] - Arr[0];

	cout << iAvr << "\n";
	cout << Mid << "\n";
	cout << Index << "\n";
	cout << Range;

	delete[] Num;
	delete[] Count;
	return 0;
}