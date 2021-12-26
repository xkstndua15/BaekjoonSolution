
#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S, T;

	while (cin >> S >> T)
	{
		int SLen = S.length();
		int TLen = T.length();
		bool Subsequence = false;
		int PrevIdx = 0;

		for (int i = 0; i < SLen; ++i)
		{
			Subsequence = false;
			for (int j = PrevIdx; j < TLen; ++j)
			{
				if (S[i] == T[j])
				{
					Subsequence = true;
					PrevIdx = j + 1;
					break;
				}
			}

			if (!Subsequence)
				break;
		}

		if (Subsequence)
			cout << "Yes";
		else
			cout << "No";

		cout << "\n";
	}


	return 0;
}