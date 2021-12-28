
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> vecLis;
	vector<string> vecAll;
	map<string, int> mapLook;

	int Lis, Look;

	cin >> Lis >> Look;

	cin.ignore();

	int Temp = Lis;
	int Count = 0;
	while (Lis--)
	{
		string inLis;
		getline(cin, inLis);

		vecLis.push_back(inLis);
	}

	while (Look--)
	{
		string inLook;
		getline(cin, inLook);

		mapLook.insert(make_pair(inLook, Look));
	}

	for (int i = 0; i < Temp; ++i)
	{
		if (mapLook.find(vecLis[i]) != mapLook.end())
			vecAll.push_back(vecLis[i]);
	}

	sort(vecAll.begin(), vecAll.end());

	cout << vecAll.size() << "\n";
	for (size_t i = 0; i < vecAll.size(); ++i)
	{
		cout << vecAll[i] << "\n";
	}


	return 0;
}