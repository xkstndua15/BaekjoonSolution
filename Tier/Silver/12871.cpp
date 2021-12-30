
#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char S[52] = {};
	char T[52] = {};

	cin >> S >> T;

	int TLen = 0;
	int SLen = 0;
	int Len = 0;
	bool Output = true;

	while (S[SLen] != '\0')
		SLen++;
	while (T[TLen] != '\0')
		TLen++;

	Len = SLen * TLen;

	if (Output)
	{
		for (int i = 0; i < Len; i++)
		{
			if (!Output)
				break;

			if (S[i % SLen] != T[i % TLen])
				Output = false;
		}
	}

	if (Output)
		cout << 1;
	else
		cout << 0;

	return 0;
}