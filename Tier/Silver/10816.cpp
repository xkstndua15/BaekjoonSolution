
#include <iostream>

int List[500000];
int Copy[500000];
int Sorted[500000];

void Merge(int list[], int left, int mid, int right);
void MergeSort(int list[], int left, int right);

int FindLower(int list[], int left, int right, int value)
{
	int mid = -1;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (list[mid] >= value)
			right = mid;
		else
			left = mid + 1;
	}

	return right;
}

int FindUpper(int list[], int left, int right, int value)
{
	int mid = -1;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (list[mid] > value)
			right = mid;
		else
			left = mid + 1;
	}

	return left;
}

using namespace std;
int main()
{
	int N, M;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Sorted[i];
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> List[i];
	}

	MergeSort(Sorted, 0, N - 1);

	for (int i = 0; i < M; i++)
	{
		int LowerIndex = FindLower(Sorted, 0, N, List[i]);
		int UpperIndex = FindUpper(Sorted, 0, N, List[i]);

		cout << UpperIndex - LowerIndex << " ";
	}
}

void Merge(int list[], int left, int mid, int right)
{
	int i, j, k;

	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (list[i] < list[j])
			Copy[k++] = list[i++];
		else
			Copy[k++] = list[j++];
	}

	if (i > mid)
	{
		for (; j <= right; j++)
		{
			Copy[k++] = list[j];
		}
	}

	else
	{
		for (; i <= mid; i++)
		{
			Copy[k++] = list[i];
		}
	}

	for (int l = left; l <= right; l++)
	{
		list[l] = Copy[l];
	}
}

void MergeSort(int list[], int left, int right)
{
	int mid = (left + right) / 2;

	if (left < right)
	{
		MergeSort(list, left, mid);
		MergeSort(list, mid + 1, right);
		Merge(list, left, mid, right);
	}
}