#include <iostream>

int Partition(int Left, int Right, int* pArray)
{
	int Low = Left;
	int High = Right + 1;
	int Value = pArray[Left];

	do
	{
		do
		{
			++Low;
		} while (Low < Right && pArray[Low] > Value);

		do
		{
			--High;
		} while (High > Left && pArray[High] < Value);

		if (Low < High)
		{
			int Temp = pArray[Low];
			pArray[Low] = pArray[High];
			pArray[High] = Temp;
		}

	} while (Low < High);

	int Temp = pArray[Left];
	pArray[Left] = pArray[High];
	pArray[High] = Temp;

	return High;
}

void Sort(int Left, int Right, int* pArray)
{
	if (Left < Right)
	{
		int Pivot = Partition(Left, Right, pArray);

		Sort(Left, Pivot - 1, pArray);
		Sort(Pivot + 1, Right, pArray);
	}
}

int main()
{
	int NumberCount = 0;
	int Count = 0;

	std::cin >> NumberCount;

	int Number[15] = {};

	while(NumberCount > 0)
	{
		Number[Count] = NumberCount % 10;
		NumberCount /= 10;
		++Count;
	}

	Sort(0, Count - 1, Number);
	
	for (int i = 0; i < Count; ++i)
	{
		std::cout << Number[i];
	}

	return 0;
}