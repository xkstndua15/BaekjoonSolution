#include <iostream>

int main()
{
	unsigned long long Left = 0;
	unsigned long long Right = 0;
	unsigned long long Sum = 0;
	int N;

	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		if (i == 1)
			Right = 1;

		if (i == 2)
			Left = 1;

		Sum = Left + Right;

		if (i % 2 == 0)
			Left = Sum;
		if (i % 2 == 1)
			Right = Sum;
	}

	if (N == 1)
		Sum = 1;

	std::cout << Sum;

	return 0;
}