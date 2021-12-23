
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K;

	cin >> K;

	vector<int> Ticket;

	for (int i = 1; i <= 1000000; ++i)
	{
		Ticket.push_back(i);
	}

	for (int i = 0; i < K; ++i)
	{
		int A = 0;
		cin >> A;

		Ticket[A - 1] = 1000001;
	}

	sort(Ticket.begin(), Ticket.end());

	cout << Ticket[0];

	return 0;
}