#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;

	cin >> T;

	while (T--)
	{
		int A, B;
		cin >> A >> B;

		cout << A + B << "\n";
	}

	return 0;
}