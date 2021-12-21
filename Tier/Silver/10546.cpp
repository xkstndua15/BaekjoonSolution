
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string, int> Player;
	string Goal;
	int N;

	cin >> N;

	cin.ignore();
	for (int i = 0; i < N; ++i)
	{
		getline(cin, Goal);

		if (Player.find(Goal) != Player.end())
			Player.find(Goal)->second -= 1;

		Player.insert(make_pair(Goal, 0));
	}
	for (int i = 0; i < N - 1; ++i)
	{
		getline(cin, Goal);

		if (Player.find(Goal)->second < 0)
			Player.find(Goal)->second += 1;
		else
			Player.erase(Goal);
	}

	cout << Player.begin()->first;

	return 0;
}