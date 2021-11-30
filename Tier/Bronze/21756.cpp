#include <iostream>

using namespace std;
int main()
{
	int N;

	cin >> N;

	int Output = 1;

	while (Output < N)
	{
		Output *= 2;
	}

	if(Output != N)
		Output /= 2;

	cout << Output;

	return 0;
}