
#include <iostream>

using namespace std;
int main() {

	int N;

	cin >> N;

	int Sum = 0;
	int Point = 1;
	int Count = 0;

	for (int i = 1; i <= N; i++)
	{
		Sum = i;
		Point = 1;

		while (Sum <= N) {
			if (Sum == N)
			{
				Count++;
				break;
			}

			Sum += i + Point++;
		}
	}

	cout << Count;

	return 0;
}