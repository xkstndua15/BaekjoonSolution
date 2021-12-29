
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string Word;
	vector<char> vecWord;
	int T;

	cin >> T;

	cin.ignore();
	while (T--)
	{
		getline(cin, Word);

		for (int i = 0; i < Word.length(); ++i)
		{
			if (isspace(Word[i]) != 0)
			{
				for (int j = i - 1; j >= 0; --j)
				{
					if (isspace(Word[j]) != 0)
						break;

					vecWord.push_back(Word[j]);
				}

				vecWord.push_back(' ');
			}

			else if (i == Word.length() - 1)
			{
				for (int j = i; j >= 0; --j)
				{
					if (isspace(Word[j]) != 0)
						break;

					vecWord.push_back(Word[j]);
				}
			}
		}

		for (int i = 0; i < vecWord.size(); ++i)
		{
			cout << vecWord[i];
		}

		cout << "\n";

		vecWord.clear();
	}


	return 0;
}