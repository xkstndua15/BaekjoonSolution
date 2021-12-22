
#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string in;
	bool out = true;

	getline(cin, in);

	for (int i = 0; i < in.length(); ++i)
	{
		if (in[i] != in[in.length() - i - 1])
		{
			out = false;
			break;
		}
	}

	if (out)
		cout << 1;
	else
		cout << 0;



	return 0;
}