
#include <iostream>

int Snail[999][999];

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N = -1;

	while (true)
	{
		cin >> N;

		if (N == 0)
			break;

		int Num[5] = {};
		int RevNum[5] = {};
		int Count = 0;
		int Mul = 1;
		int temp = N;
		bool YesNo = true;

		while (temp > 0)
		{
			RevNum[Count] = temp % 10;
			temp /= 10;
			++Count;

			Mul *= 10;
		}

		temp = N;
		for (int i = 0; i < Count; ++i)
		{
			Mul /= 10;

			Num[i] = N / Mul;

			N %= Mul;
		}

		for (int i = 0; i < Count; ++i)
		{
			if (Num[i] != RevNum[i])
				YesNo = false;
		}

		if (YesNo)
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
	

	return 0;
}