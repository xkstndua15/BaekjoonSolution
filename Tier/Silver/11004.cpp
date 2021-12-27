
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K, N;
	int AIn;
	vector<int> A;

	cin >> N >> K;

	while (N--)
	{
		cin >> AIn;
		A.push_back(AIn);
	}

	sort(A.begin(), A.end());

	cout << A[K - 1];

	return 0;
}