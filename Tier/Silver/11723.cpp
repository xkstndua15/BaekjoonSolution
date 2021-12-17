#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool S[20] = {};
	int M;
	cin >> M;

	while (M--)
	{
		cin.ignore();
		string Command;
		int Number = 0;
		cin >> Command;
		if (0 == Command.compare("all"))
		{
			for (int i = 0; i < 20; ++i)
			{
				S[i] = true;
			}
		}
		else if (0 == Command.compare("empty"))
		{
			for (int i = 0; i < 20; ++i)
			{
				S[i] = false;
			}
		}
		else
		{
			cin >> Number;

			if (0 == Command.compare("add"))
			{
				if (S[Number - 1])
					continue;
				
				S[Number - 1] = true;
			}
			else if (0 == Command.compare("remove"))
			{
				if (!S[Number - 1])
					continue;

				S[Number - 1] = false;
			}
			else if (0 == Command.compare("check"))
			{
				if (S[Number - 1])
					cout << 1;
				else
					cout << 0;

				cout << "\n";
			}
			else if (0 == Command.compare("toggle"))
			{
				S[Number - 1] = !S[Number - 1];
			}
		}
	}


	return 0;
}