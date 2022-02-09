
#include <iostream>

int List[100000];

using namespace std;
int main() {

	int N;

	int left = 0;
	int right = 0;
	int min = 2147483647;
	int Output[2] = {};
	int Sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> List[i];
	}

	right = N - 1;

	while (left < right) {
		Sum = List[left] + List[right];

		if (min >= abs(Sum))
		{
			min = abs(Sum);
			Output[0] = List[left];
			Output[1] = List[right];
		}

		if (Sum < 0)
			left++;
		else if (Sum > 0)
			right--;
		else if (Sum == 0)
			break;
	}

	cout << Output[0] << " " << Output[1];

	return 0;
}