
#include <iostream>

using namespace std;
int main()
{
	int N;
	int Output = 0;

	cin >> N;

	int* A = new int[N];
	int* B = new int[N];
	int* Number = new int[N];
	int* Mul = new int[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
		Number[i] = 0;
	}

	for (int i = 0; i < N; ++i)
	{
		cin >> B[i];
		for (int j = 0; j < i; ++j)
		{
			if (B[j] > B[i])
				++Number[j];
			else
				++Number[i];
		}
	}

	for (int i = 0; i < N - 1; ++i)
	{
		for (int j = i; j < N; ++j)
		{
			if (A[i] < A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (i == Number[j])
			{
				Mul[j] = A[i];
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		Output = Output + (Mul[i] * B[i]);
	}

	cout << Output;

	delete[] A;
	delete[] B;
	delete[] Number;
	delete[] Mul;
	

	return 0;
}