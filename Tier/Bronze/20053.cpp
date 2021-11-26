
#include <iostream>

using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	int N;
	int* Number = nullptr;

	cin >> T;

	while (T--)
	{
		int Min = 10000000;
		int Max = -10000000;

		cin >> N;

		Number = new int[N];

		for (int i = 0; i < N; ++i)
		{
			cin >> Number[i];

			if (Number[i] > Max)
				Max = Number[i];

			if (Number[i] < Min)
				Min = Number[i];
		}

		cout << Min << " " << Max << "\n";

		delete[] Number;
	}

	return 0;
}